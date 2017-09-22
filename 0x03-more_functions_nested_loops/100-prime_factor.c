#include <stdio.h>
#include "holberton.h"
/**
 * main - prints largest prime fac of n
 *
 * Description: largest prime of preset N
 * in a cool way
 * Return: 0
 */
int main(void)
{
	int i;
	long n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%d\n", i);
	return (0);
}
