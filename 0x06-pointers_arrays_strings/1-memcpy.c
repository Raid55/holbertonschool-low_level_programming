#include "holberton.h"

/**
 * _memcpy - copies mem from src to dest
 * @dest: where mem will be copied
 * @src: what mem to copy
 * @n: nth byte to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++, n--;
	}
	return (dest);
}
