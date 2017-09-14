#include <stdio.h>

/**
 * main - prints backwards alpha
 *
 * Description: this function uses putchar
 * to print the alphabetet backwards
 * Return: 0
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar (alpha);
		alpha--;
	}

	putchar ('\n');
	return (0);

}
