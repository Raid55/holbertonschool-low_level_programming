#include "holberton.h"
/**
 * print_binary_helper - prints binary w/putchar that isent 0, helps main func
 * @n: number to print in binary
 *
 * Return: VOID
 */
void print_binary_helper(unsigned long int n)
{
	if (n != 0)
	{
		if (n & 1)
			n = n >> 1, print_binary_helper(n), _putchar('1');
		else
			n = n >> 1, print_binary_helper(n), _putchar('0');
	}
	else
	{
		return;
	}
}
/**
 * print_binary - checks for 0 or sends of work to helper func
 * @n: num to change to bin
 *
 * Return: VOID
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_helper(n);
}
