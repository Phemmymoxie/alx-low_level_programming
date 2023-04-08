#include <stdio.h>
#include <stdlib.h>
/**
 * main - money change program
 * @argc: the length of argument passed.
 * @argv: the pointer to an array of strings
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int val;
	int cash = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(argv[1]);
	if (val < 0)
	{
		printf("%d\n", 0);
	}
	if (val % 25 >= 0)
	{
		cash += val / 25;
		val = val % 25;
	}
	if (val % 10 >= 0)
	{
		cash += val / 10;
		val = val % 10;
	}
	if (val %  5 >= 0)
	{
		cash += val / 5;
		val = val % 5;
	}
	if (val % 2 >= 0)
	{
		cash += val / 2;
		val = val % 2;
	}
	if (val % 1 >= 0)
		cash += val / 1;
	printf("%d\n", cash);
return (0);
}
