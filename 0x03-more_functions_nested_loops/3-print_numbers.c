#include "holberton.h"
/**
 * print_numbers - prints numbers to 9
 *
 * Description: prints to 9 and nothing else
 * in a cool way
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9;i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
