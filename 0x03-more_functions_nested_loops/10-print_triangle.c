#include "holberton.h"
/**
 * print_triangle - prints triangle of size
 * @size: size to print
 *
 * Description: prints triangle dimenssions of size
 * in a cool way
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0, j, s, space = size;

	if (size <= 0)
		_putchar('\n');
	while (i < size)
	{
		space--;
		for (s = space; s > 0; s--)
			_putchar(' ');

		for (j = size - space; j > 0; j--)
			_putchar('#');
		_putchar('\n');
		i++;
	}
}
