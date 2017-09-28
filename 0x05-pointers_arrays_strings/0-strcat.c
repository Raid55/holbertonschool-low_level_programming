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
 * _strcat - appends src string to dest
 * @src: source file
 * @dest: destination file
 *
 * Return: dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int destC, srC;
	int i = 0;

	destC = _strlen(dest);
	srC = _strlen(src);

	while (i <= srC)
	{
		dest[destC] = src[i];
		destC++, i++;
	}

	dest[destC] = '\0';

	return (dest);
}
