#include "holberton.h"
/**
 * print_diagonal - prints i number of diagonal line 
 * @i: number of lines to print
 *
 * Description: prints diagonal depending on i
 * in a cool way
 * Return: void
 */
void print_diagonal(int i)
{
	int s = 0, j;
	
	while (i > 0)
	{
		for (j = 0; j <= s; j++)
			_putchar(' ');
		_putchar('\\');
		if (i == 1)
		{
			i--;
			continue;
		}
		_putchar('\n');
		i--;
		s++;
	}
	if (i <= 0)	
		_putchar('\n');
}
