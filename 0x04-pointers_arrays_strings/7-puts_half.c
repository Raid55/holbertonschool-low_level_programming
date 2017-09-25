#include "holberton.h"

/**
 * puts_half - puts strings every even number
 * @str: string to b put
 *
 * Return: void
 */
void puts_half(char *str)
{
	int aSize = 0, j = 0;

	while (str[aSize])
		aSize++;

	while (j < aSize)
	{
		if (aSize % 2 != 0 && j >= ((aSize - 1) / 2) + 1)
			_putchar(str[j]);
		else if (aSize % 2 == 0 && j >= aSize / 2)
			_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}
