#include "holberton.h"
/**
 * print_number - prints n
 * @n: Number to be printed
 *
 * Description: prints n with putchar
 * in a cool way
 * Return: void
 */
void print_number(int n)
{
	int digit, rev;
	
	if (n < 0)
		_putchar('-'), n = n * -1;
	if(n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		while (n > 0)
		{
			rev = rev * 10 + n % 10;
			n /= 10;
		}
		while (rev > 0)
		{
			digit = rev % 10;
			_putchar(digit + '0');
			rev /= 10;
		}
	}
}
