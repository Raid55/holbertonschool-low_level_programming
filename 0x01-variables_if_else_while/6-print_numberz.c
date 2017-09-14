#include <stdio.h>

/**
 * main - prints base 10 num
 *
 * Description: this function uses putchar
 * to print the base 10 nunmbers
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar (n + '0');
		n++;
	}

	putchar ('\n');
	return (0);

}
