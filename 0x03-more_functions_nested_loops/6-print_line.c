#include "holberton.h"
/**
 * print_line - prints i number of lines
 * @i: number of lines to print
 *
 * Description: prints lines depending on i
 * in a cool way
 * Return: void
 */
void print_line(int i)
{
	while (i > 0)
	{
		_putchar('_');
		i--;
	}
	if (i <= 0)
		_putchar('\n');
}
