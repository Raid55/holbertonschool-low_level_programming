#include "holberton.h"

/**
 * times_table - prints times tables
 *
 * Description: returns times table to 9
 * in a cool way
 * Return: void
 */
void times_table(void)
{
	int x = 0, a = 0, b = 0;

	while (a <= 9)
	{
		while (b <= 9)
		{
			x = a * b;
			if (b == 0)
			{
				_putchar('0');
				_putchar(',');
				b++;
				continue;
			}
			_putchar(' ');

			if (x >= 10)
				_putchar((x / 10) + '0');
			else
				_putchar(' ');

			_putchar((x % 10) + '0');

			if (b == 9)
			{
				_putchar('\n');
				b++;
				continue;
			}
			_putchar(',');
			b++;
		}
		b = 0;
		a++;
	}
}
