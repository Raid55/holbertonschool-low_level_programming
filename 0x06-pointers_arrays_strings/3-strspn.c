#include "holberton.h"
/**
 * _strspn - checks if s has accept at start
 * @s: string to search
 * @accept: char to accept only if at start
 *
 * Return: how much chars matched
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j = 0, l = 0;
	unsigned int I;

	while (s[j] != '\0')
	{
		I = i;
		while (accept[l] != '\0')
		{
			if (accept[l] == s[j])
			{
				i++;
				break;
			}
			l++;
		}
		if (i == I)
			break;
		l = 0;
		j++;

	}
	return (i);
}
