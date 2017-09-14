#include <stdio.h>

/**
 * main - prints lowercase alphabet
 *
 * Description: this function uses putchar
 * to print the alphabet
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar (alpha);
		alpha++;
	}

	putchar ('\n');
	return (0);

}
