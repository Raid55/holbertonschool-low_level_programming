#include "holberton.h"
#include <stdio.h>
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
	int digit, rev = 0;
	int N = n;

	if (n == 0)
		_putchar('0');
	if (n < 0)
		_putchar('-'), n = (n - 1) * -1;
	while (n > 0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	while (rev > 0)
	{
		digit = rev % 10;
		if(N < 0 && rev < 10)
			digit++;
		_putchar(digit + '0');
		rev /= 10;
	}
}
