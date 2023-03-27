#include "main.h"

/**
 * _strlen - check the code
 * @s: parameter passed of type char.
 * Return: Always 0.
 */

int _strlen(char s[])
{
	int len;

	len = 0;
	while (s[len] != '\0')
	len++;

	return (len);
}
