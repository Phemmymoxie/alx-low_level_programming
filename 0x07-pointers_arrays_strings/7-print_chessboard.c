#include "main.h"

/**
 * print_chessboard - A function that prints values.
 * @a: the pointer to a 2d array elements
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int cnt = 0, cnt2 = 0;

	for (cnt = 0; cnt < 8; cnt++)
	{
		cnt2 = 0;
		for (; cnt2 < 8; cnt2++)
			{
			_putchar(a[cnt][cnt2]);
			}
		_putchar('\n');
	}
}

