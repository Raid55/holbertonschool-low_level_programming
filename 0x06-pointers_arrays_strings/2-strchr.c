#include "holberton.h"

/**
 * _strchr - copies mem from src to dest
 * @s: string to search
 * @c:
 *
 * Return: null if not found and pointer to char if found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
	{
		while (i > 0)
			i--, s++;
		return (s);
	}
	else
	{
		return (0);
	}
	return (s);
}
