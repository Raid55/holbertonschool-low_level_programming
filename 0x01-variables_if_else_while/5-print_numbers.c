#include <stdio.h>

/**
 * main - prints base 10 nums
 *
 * Description: this function uses printf
 * to print the base 10 nunmbers
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}

	putchar('\n');
	return (0);

}
