#include<stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints to 98 from n
 * @n: starting point
 *
 * Description: prints from a starting point to 98
 * in a cool way
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 98 || n >= 98)
	{
		if (n == 98)
		{
			printf("%d\n", n);
			break;
		}
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
}
