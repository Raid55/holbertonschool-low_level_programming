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
/**
 * _strpbrk - checks if s has accept and starts string there
 * @s: string to search
 * @accept: char to accept as starting point
 *
 * Return: new starting point
 */
char *_strpbrk(char *s, char *accept)
{
	while (s)
		if (_strchr(accept, *s++))
			return (--s);
	return (0);
}
