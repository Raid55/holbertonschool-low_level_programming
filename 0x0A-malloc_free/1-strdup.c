#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * _strdup - duplictes string to a new location in mem
 * @str: string to copy to new allocation...lol
 *
 * Return: pointer to new str
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *a;
	unsigned int size = strlen(str);

	a = malloc(size + 1);

	if (a == NULL)
		return (NULL);
	while (i <= size)
		a[i] = str[i], i++;
	return (a);
}
