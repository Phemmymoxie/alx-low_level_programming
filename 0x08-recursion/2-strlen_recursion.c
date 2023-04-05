#include "main.h"

/**
 * _strlen_recursion - This function retruns length of
 * a string recursively.
 * @s: the string to be counted.
 * Return: the length of the sring.
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
	{
		return (0);
	}
return (1 + _strlen_recursion(s + 1));
}
