#include "main.h"
#include <string.h>

/**
 * sub_palindrome - function that checks if the string is a palindrome
 * @s: the given string to be checked.
 * @n: the frst argument to check from the begining of string s.
 * @r: the second argument to check from the end of string s.
 * Return: return 1 if true or 0 if false.
 */
int sub_palindrome(char *s, int n, int r)
{
	if (n == r)
		return (1);

	if (s[n] != s[r])
		return (0);

	if (n < r + 1)
	{
		return (sub_palindrome(s, n + 1, r - 1));
	}
	return (1);
}

/**
 * is_palindrome - checks a palindrome string
 * @s: the string provided.
 *
 * Return: result.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);
	return (sub_palindrome(s, 0, len - 1));
}
