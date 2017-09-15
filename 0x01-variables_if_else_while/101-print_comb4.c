#include <stdio.h>

/**
 * main - prints all 2 number combinations
 *
 * Description: this function uses putchar
 * to print the all 00 number combination
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, c = 2;

	while (a < 8)
	{
		while (b < 9)
		{
			while (c < 10)
			{
				if (a == b || b == a || b == c || a == c)
				{
					c++;
					continue;
				}
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				if (a == 7 && b == 8 && c == 9)
				{
					a = 9, b = 10, c = 11;
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
	putchar('\n');
	return (0);
}
