#include "holberton.h"
/**
 * main - does what main does
 *
 * Description: ayyoo
 * Returns: 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter < 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
