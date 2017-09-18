#include "holberton.h"
/**
 * print_alphabet_x10 - prints alpha 10x
 *
 * Description: This prints the alphabet 10x
 * Return: void
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
