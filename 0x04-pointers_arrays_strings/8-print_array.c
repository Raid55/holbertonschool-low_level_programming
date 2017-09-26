#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints int array out
 * @a: arr
 * @n: how much to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	putchar('\n');
}
