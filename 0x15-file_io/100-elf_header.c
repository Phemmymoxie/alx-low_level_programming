#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>

/**
 * d_magic - prints magic
 * @res: pointer to the element of ELF
 * Return: void
 */
void d_magic(char *res)
{
	int cnt = 0;

	printf("  Magic:  ");

	while (cnt < 16)
	{
		printf(" %02x", res[cnt]);
		cnt++;
	}

	printf("\n");
}


/**
 * d_data - prints data segment in an ELF file
 * @res: pointer to the ELF element
 *
 * Return: void.
 */
void d_data(char *res)
{
	char data;

	data = res[5];

	printf("  Data:				2's complement");
	if (data == 1)
		printf(", little endian\n");

	if (data == 2)
		printf(", big endian\n");
}

/**
 * d_version - function that prints the version segment of an ELF file
 * @res: the pointer to the element of the file
 * Return: void.
 */
void d_version(char *res)
{
	int cnt;

	cnt = res[6];

	printf("  Version:			%d", cnt);

	if (cnt == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}

/**
 * view_osabi - function that print the OS/ABI of an ELF file
 * @res: the pointer to the element of the file
 *
 * Return: void.
 */
void view_osabi(char *res)
{
	char temp = res[7];

	printf("  OS/ABI:			");
	if (temp == 0)
		printf("UNIX - System V\n");
	else if (temp == 2)
		printf("UNIX - NetBSD\n");
	else if (temp == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x\n", temp);

	printf("  ABI Version:			%d\n", res[8]);
}

/**
 * view_type - function that prints the type in an ELF file
 * @res: a pointer to the elements of the file
 *
 * Return: void.
 */
void view_type(char *res)
{
	char buff;

	if (res[5] == 1)
		buff = res[16];
	else
		buff = res[17];
	
	printf("  Type:				");
	if (buff == 0)
		printf("NONE (Nn file type)\n");
	else if (buff == 1)
		printf("REL (Relocate file)\n");
	else if (buff == 2)
		printf("EXEC (Executable file)\n");
	else if (buff == 3)
		printf("DYN (Shared object file)\n");
	else if (buff == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", buff);
}

/**
 * d_addr - function that prints address in an ELF file
 * @res: a pointer to the the element of the file
 *
 * Return: void.
 */
void d_addr(char *res)
{
	int cnt, index;
	char st;

	cnt = res[4] + '0';

	if (cnt == '1')
	{
		st = 26;
		printf("80");
		index = st;
		while (index >= 22)
		{
			if (res[index] > 0)
				printf("%x", res[index]);

			else if (res[index] < 0)
				printf("%x", 256 + res[index]);
			index--;
		}
	if (res[7] == 6)
		printf("00");
	}
	if (cnt == '2')
	{
		st = 26;
		index = st;
		while (index > 23)
		{
			if (res[index] >= 0)
				printf("%02x", 256 + res[index]);

			else if (res[index] < 0)
				printf("%02x", 256 + res[index]);
			index--;
		}
	}
	printf("\n");
}

/**
 * ch_elf - function that checks if a file is an ELF file
 * @res: the pointer to the head element of the file
 * Return: `1` if it's an ELF file or `0` if it's not
 */
int ch_elf(char *res)
{
	int first = (int)res[0];
	char e = res[1];
	char l = res[2];
	char f = res[3];

	if (first == 127 && e == 'E' && l == 'L' && f == 'F')
		return (1);

	return (0);
}

/**
 * output_all - this function display the segment of an elf file
 * @res: pointer to a string
 * Return: void.
 */
void output_all(char *res)
{
	char temp = res[4] + '0';

	if (temp == '0')
		exit(98);

	printf("ELF Header:\n");
	d_magic(res);

	if (temp == '1')
		printf("  Class:			ELF32\n");
	
	else if (temp == '2')
		printf("  Class:                        ELF64\n");

	d_data(res);
	d_version(res);
	view_osabi(res);
	view_type(res);
	d_addr(res);
}

/**
 * main - main function
 * @argc: the lenght of the argv element
 * @argv: the pointer to an array of string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file, file_r;
	char res[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Error: Usage: elf_header elf_filename\n");
		exit(98);
		return (0);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: This file cannont be opened\n");
		exit(98);
		return (0);
	}

	lseek(file, 0, SEEK_SET);
	file_r = read(file, res, 27);

	if (file_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: this file cannot be read\n");
		exit(98);
	}

	if (!(ch_elf(res)))
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
		exit(98);
	}

	output_all(res);
	close(file);
	return (0);
}
