#include <stdio.h>

/**
 * main - prints base 16
 *
 * Description: this function uses putchar
 * to print base 16
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';
	int num = 0;

	while (num < 16)
	{
		if (num >= 10)
		{
			putchar(alpha);
			alpha++;
			num++;
			continue;
		}
		putchar (num + '0');
		num++;
	}

	putchar ('\n');
	return (0);

}
