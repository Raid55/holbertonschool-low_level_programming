#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *  _strlen - returns lenth of string (array)
 * @s: string(arr) to be messured
 *
 * Return: length of arr
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new str
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int I;
	unsigned int size1;
	unsigned int size2;
	char *a;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	a = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (a == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
		a[I] = s1[i], i++, I++;
	i = 0;
	while (s2[i] != '\0')
		a[I] = s2[i], i++, I++;
	a[I] = '\0';
	return (a);
}
