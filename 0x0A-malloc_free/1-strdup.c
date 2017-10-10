#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 *  _strlen - returns lenth of string (array)
 * @s: string(arr) to be messured
 *
 * Return: length of arr
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
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
	unsigned int size = _strlen(str);

	if (str == NULL)
		return (NULL);
	a = (char *)malloc(sizeof(char) * size + 1);

	if (a == NULL)
		return (NULL);
	while (i < size)
		a[i] = str[i], i++;
	return (a);
}
