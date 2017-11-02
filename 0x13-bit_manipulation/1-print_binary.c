#include "holberton.h"
/**
 * print_binary - prints binary with putchar
 * @n: number to print in binary
 *
 * Return: VOID
 */
void print_binary(unsigned long int n)
{
	if (n <= 1) 
	{
		_putchar('0' + n);
	}
    else
	{
		print_binary(n / 2);
		_putchar('0' + n % 2);
	}
}
