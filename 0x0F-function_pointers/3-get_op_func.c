#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - a function that check the character
 * passed in to it and return the corresponding function for it
 * @s: the character passed as an argument
 *
 * Return: a pointer to the corresponding function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
};
	int b = 0;

	while (b < 10)
	{
		if (s[0] == ops->op[b])
		{
			return (ops[b / 2].f);
		}
	b++;
	}
	return (NULL);
}

