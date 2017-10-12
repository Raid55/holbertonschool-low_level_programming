#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - makes an array with numbers
 * @min: start number
 * @max: max num
 *
 * Return: pointer to arr or null
 */
int *array_range(int min, int max)
{
	int *a;
	int i, I = 0;

	if (min > max)
		return (NULL);
	i = min;
	while (max >= i)
		I++, i++;

	a = malloc(sizeof(int) * I);
	if (a == NULL)
		return (NULL);
	while (min <= max)
		a[i++] = min++;

	return (a);
}
