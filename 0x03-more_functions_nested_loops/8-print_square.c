#include "holberton.h"
/**
 * print_square - prints square of size
 * @size: size to print
 *
 * Description: prints square dimenssions of size
 * in a cool way
 * Return: void
 */
void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
		_putchar('\n');
	while (i < size)
	{
		_putchar('#');
		for (j = 0; j < size - 1; j++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
}
