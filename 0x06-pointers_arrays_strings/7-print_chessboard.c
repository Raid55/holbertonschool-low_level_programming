#include "holberton.h"

/**
 * print_chessboard - prints chessboard arryay
 * @a: chessboard
 *
 * Retun: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, I = 0;
	
	while (i < 8)
	{
		while (I < 8)
		{
			_putchar(a[i][I]);
			I++;
		}
		_putchar('\n');
		I = 0;
		i++;
	}
}
