#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Number generator and checker that check the last digit
 * This program generates a random number each time it's run
 * It then generates the last digit of the number
 * If the last digit is `0`, greater than 5 or less than 6 and not zero.
 *
 * Return: Always (0)
*/

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char last_d;

	last_d = n % 10;

	if (last_d > 5)
	printf("Last digit of %d is %c and is greater than 5\n", n, last_d);

	else if (last_d == 0)
	printf("Last digit of %d is %c and is 0\n", n, last_d);

	else if (last_d < 6 && last_d != 0)
	printf("Last digit of %d is %c and is less than 6 and not 0\n", n, last_d);

	return (0);
}
