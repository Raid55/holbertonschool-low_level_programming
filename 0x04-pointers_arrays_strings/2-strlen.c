#include "holberton.h"

/**
 * _strlen - returns lenth of string (array)
 * @n: string(arr) to be messured
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
