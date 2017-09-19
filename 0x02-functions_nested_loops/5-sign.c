#include "holberton.h"
/**
 * print_sign - finds number sign
 * @i: number to be checked
 *
 * Description: checks if int is pos, neg, or zero
 * in a cool way
 * Return: -, + or 0
 */
int print_sign(int i)
{

	if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
