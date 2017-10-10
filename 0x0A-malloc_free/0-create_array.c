#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array and sets them with c
 * @size: size of array to create
 * @c: character to fill
 *
 * Return: pointer to array with chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	if (size == 0)
		return (NULL);

	a = (char *)malloc(size);

	if (a == NULL)
		return (NULL);
	while (i < size)
		a[i] = c, i++;
	return (a);
}
