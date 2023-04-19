#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function that add two integers
 * @a: first integer
 * @b: second intger
 * Return: an integer result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtract
 * @a: the first integer
 * @b: the second integer
 * Return: an integer result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that perform multiplication
 * @a: the first integer
 * @b: the second integer
 * Return: result in integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that perform division
 * @a: the first number
 * @b: the second number
 * Return: the result in integer
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);

	return (a / b);
}

/**
 * op_mod - function that performs modulus operation
 * @a: the first integer
 * @b: the second integer
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);

	return (a % b);
}

