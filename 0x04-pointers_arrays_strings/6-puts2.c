#include "holberton.h"

/**
 * puts2 - puts strings every even number
 * @str: string to b put
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i])
		i++;
	while (i >= 0)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
		i--, j++;
	}
	_putchar('\n');
}
