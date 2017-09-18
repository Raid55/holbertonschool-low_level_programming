#include "holberton.h"
/**
 * main - does what main does
 *
 * Description: ayyoo
 * Returns: 0
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		while (letter < 'z')
		{
			_putchar(letter);
			letter++;
		}
		letter = 'a';
		_putchar('\n');
	}
}
