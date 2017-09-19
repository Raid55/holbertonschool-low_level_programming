#include "holberton.h"

/**
 * print_times_table - prints times tables from n
 *
 * Description: returns times table to n
 * in a cool way
 * Return: void
 */
void print_times_table(int n)
{
	int y = 0, x = 0, a = 0, b = 0;

	while (a <= n)
	{
	if (n < 0 || n > 15)
		break;
		while (b <= n)
		{
			x = a * b;
			if (x >= 100 && b != 0)
			{
				y = x / 10;
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
			}
			if (x >= 10 && !(x >= 100) && b != 0)
				_putchar((x / 10) + '0');
			else if (!(x >= 100) && b != 0)
				_putchar(' ');
			_putchar((x % 10) + '0');
			if (b == n)
			{
				_putchar('\n');
				b++;
				continue;
			}
			_putchar(',');
			_putchar(' ');
			b++;
		}
		b = 0;
		a++;
	}
}
