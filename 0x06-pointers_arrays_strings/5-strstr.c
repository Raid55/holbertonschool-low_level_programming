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
	int needleLen = 0;
	int I = 0, i = 0;
	int flag = 1;

	while (needle[needleLen] != '\0')
		needleLen++;

	while (haystack[I] != '\0')
	{
		j = 0;
		i = I;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
				i++, j++;
			else
				break;
			if (j == needleLen - 1)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			break;
		I++;
	}
	if (flag)
		while (I >= 0)
		{
			I--;
			haystack++;
		}
	return (I ? ++haystack : 0);
}
