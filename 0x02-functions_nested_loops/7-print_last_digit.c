#include "holberton.h"

/**
 * print_last_digit - prints and returns last dig
 * @i: number to be checked
 *
 * Description: returns a last digit
 * in a cool way
 * Return: i's last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		_putchar(((i - i - i) % 10) + '0');
		return ((i - i - i) % 10);
	}
	else
	{
		_putchar((i % 10) + '0');
		return (i % 10);
	}
}
