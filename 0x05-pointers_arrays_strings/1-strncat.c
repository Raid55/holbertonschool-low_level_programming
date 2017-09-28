#include "holberton.h"

/**
 * _strlen - returns string len
 * @str :  string to b messured
 *
 * Return: str length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
/**
 * _strncat - appends src string to dest for n bytes
 * @src: source file
 * @dest: destination file
 * @n: how much byte to append
 *
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int destC, srC;
	int i = 0;

	destC = _strlen(dest);
	srC = _strlen(src);

	while (i <= srC && n != 0 && src[i] != '\0')
	{
		dest[destC] = src[i];
		destC++, i++, n--;
	}

	dest[destC] = '\0';

	return (dest);
}
