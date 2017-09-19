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

	if (i % 10 < 0)
	{
		_putchar(((i % 10) * -1) + '0');
		return ((i % 10) * -1);
	}
	else
	{
		_putchar((i % 10) + '0');
		return (i % 10);
	}
}
