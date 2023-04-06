#include "main.h"

/**
 * another_prime - this function cheks from 1 to n
 * @j: the actual number in this case 'n'
 * @i: the integer that goes from 1.
 * Return: an int.
 */
int another_prime(int j, int i)
{
	if (j == i)
		return (1);
	else if (j % i == 0)
		return (0);
	return (another_prime(j, i + 1));
}

/**
 * is_prime_number - this function checks for a prime number
 * @n: the number to be checked
 *
 * Return: return 1 if true of 0 if false.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (another_prime(n, 2));
}
