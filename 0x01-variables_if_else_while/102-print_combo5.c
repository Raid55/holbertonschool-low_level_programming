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
	int a = 0, b = 0, c = 0, d = 0;

	while (a <= 9)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					if (((a * 10) + b) > ((c * 10) + d) ||
						(a >= c && b >= d))
					{
						d++;
						continue;
					}
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a == 9 && b == 8 && c == 9 && d == 9)
					{
						a = 10, b = 9, c = 9, d = 9;
						continue;
					}
					putchar(',');
					putchar(' ');
					d++;
				}
				d = 0, c++;
			}
			c = 0, b++;
		}
		b = 0, a++;
	}
	putchar('\n');
	return (0);
}
