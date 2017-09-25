#include "holberton.h"

/**
 * _puts - puts string
 * @str: string to b put
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
