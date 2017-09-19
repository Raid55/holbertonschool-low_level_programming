#include "holberton.h"

/**
 * jack_bauer - prints and returns last dig
 *
 * Description: returns a last digit
 * in a cool way
 * Return: void
 */
void jack_bauer(void)
{
	int h = 0, h2 = 0, m = 0, m2 = 0;

	while (h <= 2)
	{
		while (h2 <= 9)
		{
			while (m <= 5)
			{
				while (m2 <= 9)
				{
					_putchar(h + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(m2 + '0');
					_putchar('\n');
					if (h == 2 && h2 == 3 && m == 5 && m2 == 9)
					{
						h = 10, h2 = 10, m = 10, m2 = 10;
						continue;
					}
					m2++;
				}
				m2 = 0;
				m++;
			}
			m = 0;
			h2++;
		}
		h2 = 0;
		h++;
	}
}
