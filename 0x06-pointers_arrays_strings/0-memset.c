#include "holberton.h"

/**
 * _memset - changes nth amount of bytes with b starting from s
 * @s:starting point
 * @b:byte to change to
 * @n: nth of bytes to change
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++, n--;
	}
	return (s);
}
