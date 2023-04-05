#include "main.h"

/**
 * factorial - The function that returns the factorial of n.
 * @n: the number to be factorize
 *
 * Return: the result.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
return (n * factorial(n - 1));
}

