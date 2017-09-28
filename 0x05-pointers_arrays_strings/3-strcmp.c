#include "holberton.h"

/**
 * _strlen - returns string len
 * @str :  string to b messured
 *
 * Return: str length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
/**
 * _strcmp - appends src string to dest
 * @s1: check for copy
 * @s2: check for copy
 *
 * Return: int depending on if copy or not
 */
int _strcmp(char *s1, char *s2)
{
	int s1C;
	int i = 0;
	int res = 0;

	s1C = _strlen(s1);

	while (s1C > 0)
	{
		if (s1[i] == s2[i])
			res = 0, i++, s1C--;
		else
			return (s1[i] > s2[i] ? s1[i] - s2[i] + 0 : (s1[i] - s2[i]) * 1);
	}
	return (res);
}
