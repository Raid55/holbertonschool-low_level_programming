#include "holberton.h"
/**
 * leet - convert to leet
 * @s: source string
 *
 * Return: char pointer
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char template[20] = "a4A4e3E3o0O0t7T7l1L1";

	while (s[i] != '\0')
	{
		while (template[j] != '\0')
		{
			if (s[i] == template[j])
			{
				s[i] = template[j + 1];
				break;
			}
			j++, j++;
		}
		j = 0;
		i++;
	}


	return (s);
}
