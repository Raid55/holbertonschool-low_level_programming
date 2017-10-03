#include "holberton.h"
/**
 * _strstr - checks haystack for needle
 * @haystack: haystack to search
 * @needle: neddle to find
 *
 * Return: haystack starting from needle
 */
char *_strstr(char *haystack, char *needle)
{
	int j = 0;
	int I = 0, i = 0;

	while (needle[j] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
			continue;
		}
		else
		{
			i = I;
			I++;
			j = 0;
			continue;
		}
		if (haystack[I] != '\0')
			break;
	}
	if (I)
		haystack += --I;
	return (I ? haystack : 0);
}
