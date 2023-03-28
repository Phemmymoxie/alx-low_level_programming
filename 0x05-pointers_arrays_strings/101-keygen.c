#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int length = 14;
	int i;

	char *password = malloc(length + 1);

	char *lower_t = "abcdefghijklmnopqrstuwxyz";
	char *digits = "0123456789";
	char *upper_t = "ABCDEFGHIJKLMNOPQRSTUWXYZ";
	char *sym_t = ":></?*&^%$#@!)(";

	int len_lower = strlen(lower_t);
	int len_dig = strlen(digits);
	int len_upper = strlen(upper_t);
	int len_sym = strlen(sym_t);

	srand(time(NULL) * getpid());

	for (i = 0; i < length; i++)
	{
		int char_type = rand() % 4;

		if (char_type == 0)
			password[i] = digits[rand() % len_dig];

		else if (char_type == 1)
			password[i] = upper_t[rand() % len_upper];

		else if (char_type == 2)
			password[i] = lower_t[rand() % len_lower];

		else
			password[i] = sym_t[rand() % len_sym];
	}
	password[length] = '\0';

	printf("%s\n", password);

	free(password);

	return (0);
}
