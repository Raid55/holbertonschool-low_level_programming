#include <stdio.h>
#include "holberton.h"

/**
 * _strcpy - copy a string from on address to another
 * @dest: destination
 * @src: source to copy
 *
 * Return: pointer of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
