#include "holberton.h"
/**
 * more_numbers - prints numbers to 14 * 10
 *
 * Description: prints to 14 * 10
 * in a cool way
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
