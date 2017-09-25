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
		if (i == (n - 1))
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
