#include "main.h"

/**
 * sub_sqrt - function that checks for the sqareroot of a number
 * by checking from a lower number
 * @num: the number which the square root is to be checked
 * @cnt: a number lower than num to check if the product is num.
 * Return: an int
 */
int sub_sqrt(int num, int cnt)
{
	if (num == cnt)
		return (-1);

	else if (cnt * cnt == num)
		return (cnt);

	return (sub_sqrt(num, cnt + 1));
}

/**
 * _sqrt_recursion - finds and return the squareroot of the number
 * @n: the number of which the square root is to be find.
 *
 * Return: the result.
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);

	else if (n < 0)
		return (-1);

	return (sub_sqrt(n, 2));
}
