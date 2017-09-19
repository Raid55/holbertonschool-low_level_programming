#include "holberton.h"

/**
 * print_alphabet - prints alpha
 *
 * Description: does things that are cool
 * and also prints alphabet btw...
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
