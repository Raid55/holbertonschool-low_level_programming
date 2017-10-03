#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - checks haystack for needle
 * @haystack: haystack to search
 * @needle: neddle to find
 *
 * Return: haystack starting from needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, I = 0;
	int j = 0;

	while (haystack[I] != '\0')
	{
		i = I;
		while (needle[j] == haystack[i] && needle[j] != '\0')
			j++, i++;
		if (needle[j] == '\0')
		{
			while (I > 0)
				haystack++, I--;
			return (haystack);
		}
		j = 0;
		I++;
	}
	return (0);
}
