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
 * argstostr - concatenate all arguments
 * @ac: argc
 * @av: argv
 *
 * Return: pointer to new allocated string
 */
char *argstostr(int ac, char **av)
{
	int sizeSum = 0;
	int i = 0, j = 0, l = 0;
	char *a;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	while (i < ac)
		sizeSum += _strlen(av[i]), i++;

	i = 0;

	a = (char *)malloc(sizeof(char) * sizeSum + ac);
	if (a == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j] != '\0')
			a[l] = av[i][j], j++, l++;
		j = 0;
		i++;
		a[l] = '\n';
		l++;
	}
	l++;
	a[l] = '\0';
	return (a);
}
