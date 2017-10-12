#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates string s1 with nth of s2
 * @s1: string 1
 * @s2: string 2
 * @n: size to take from s2
 *
 * Return: poiter to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int s1Len, s2Len;
	unsigned int i, I;
	char *emptyString = "";

	if (s1 == NULL)
		s1 = emptyString;
	if (s2 == NULL)
		s2 = emptyString;

	s1Len = strlen(s1);
	s2Len = strlen(s2);

	a = malloc(s1Len + 1 + n >= s2Len ? s2Len : n);
	if (a == NULL)
		return (NULL);

	i = 0, I = 0;
	while (s1[i] != '\0')
		a[I++] = s1[i++];
	i = 0;
	while (i < n)
		a[I++] = s2[i++];
	a[I] = '\0';

	return (a);
}