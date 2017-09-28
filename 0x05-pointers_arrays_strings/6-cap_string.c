#include "holberton.h"
/**
 * cap_string - capitalizes on captial investments
 * @s: source string
 *
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
			else if (!(s[i - 1] >= 'A' && s[i - 1] <= 'Z') &&
					 !(s[i - 1] >= 'a' && s[i - 1] <= 'z') &&
					 !(s[i - 1] >= '0' && s[i - 1] <= '9') &&
					 (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
		}
		i++;
	}

	return (s);
}
