#include <stdio.h>

/**
 * main - prints upper/lowercase alphabet
 *
 * Description: this function uses putchar
 * to print the alphabet upper and lowercase
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';
	char _Alpha = 'A';

	while (alpha <= 'z')
	{
		putchar (alpha);
		alpha++;
	}

	while (_Alpha <= 'Z')
	{
		putchar (_Alpha);
		_Alpha++;
	}

	putchar ('\n');
	return (0);

}
