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
 * @n: number of bytes to copy
 *
 * Return: dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
