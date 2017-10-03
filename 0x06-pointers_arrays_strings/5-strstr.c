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
	int j = 0;
	int needleLen = 0;
	int I = 0, i = 0;
	int flag = 0;

	while (needle[needleLen] != '\0')
		needleLen++;

	while (haystack[I] != '\0')
	{
		j = 0;
		i = I;
		while (needle[j] != '\0')
		{
			if (haystack[i] != '\0' && haystack[i] == needle[j])
				i++, j++;
			else
				break;
			if (needle[j] == '\0')
				flag = 1;
		}
		printf("I: %d\nflag: %d\n", I, flag);
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
	printf("I: %d\nflag: %d\n", I, flag);
	return (flag ? --haystack : 0);
}
