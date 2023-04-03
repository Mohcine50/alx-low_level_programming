#include "main.h"

/**
 * print_chessboard - prints a given chess board.
 * @a: the board
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] == ' ')
			{
				_putchar(' ');
			}
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
