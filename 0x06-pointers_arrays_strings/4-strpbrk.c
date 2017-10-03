#include "holberton.h"
/**
 * _strpbrk - checks if s has accept and starts string there
 * @s: string to search
 * @accept: char to accept as starting point
 *
 * Return: new starting point
 */
char *_strpbrk(char *s, char *accept)
{
	char *scpy = s;
	int j = 0;

	while (s[0] != '\0')
	{
		while (accept[j])
		{
			if (s[0] == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	s = scpy;
	return (s);
}
