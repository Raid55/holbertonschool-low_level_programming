#include "holberton.h"
/**
 * string_toupper - capitalizes on capitalizme...
 * @s: source string
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}

	return (s);
}
