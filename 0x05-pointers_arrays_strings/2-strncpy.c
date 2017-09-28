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
	int destC, srC;
	int i = 0, N = n;

	destC = _strlen(dest);
	srC = _strlen(src);

	while (i <= srC && n != 0)
	{
		if (src[i] == '\0' && N > destC)
		{
			dest[i] = '\0';
			break;
		}

		dest[i] = src[i];
		i++, n--;
	}


	return (dest);
}
