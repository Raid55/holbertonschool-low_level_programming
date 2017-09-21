#include "holberton.h"
/**
 * print_most_numbers - prints numbers to 9
 *
 * Description: prints to 9 and but not 2 and 4
 * in a cool way
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9;i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
