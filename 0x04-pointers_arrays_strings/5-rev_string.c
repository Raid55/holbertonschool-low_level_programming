#include "holberton.h"

/**
 * rev_string - rev string in memory
 * @s: string to b put in rev
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp;

	while (s[i])
		i++;
	i--;
	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
		j++;
	}
}
