#include <stdio.h>

/**
 * main - prints lowercase alphabet, !q&&e
 *
 * Description: this function uses putchar
 * to print the alphabet exepte for q and e
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
		{
			alpha++;
			continue;
		}
		putchar (alpha);
		alpha++;
	}

	putchar ('\n');
	return (0);

}
