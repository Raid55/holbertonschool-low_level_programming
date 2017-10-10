#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *  _strlen - returns lenth of string (array)
 * @s: string(arr) to be messured
 *
 * Return: length of arr
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * alloc_grid - allocate grid
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to mutli arr
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (void *)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	while (i < height)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i++] == NULL)
			return (NULL);
	}
	i = 0;
	while (i < height)
	{
		while (j < width)
			a[i][j++] = 0;
		i++;
		j = 0;
	}
	return (a);
}
