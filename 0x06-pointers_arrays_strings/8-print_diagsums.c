#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - diagonal sum between square arrays
 * @a: array
 * @size: size of square arr
 *
 * Retun: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int sSum = 0, eSum = 0;

	while (i <= size * size)
	{
		sSum += a[i];
		eSum += a[j];
		j += size - 1;
		i += size + 1;
	}
	printf("%d, %d\n", sSum, eSum);
}
