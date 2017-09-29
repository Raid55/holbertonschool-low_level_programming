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
			else if (((s[i - 1] >= 32 && s[i - 1] <= 34) ||/*spaces, !, "*/
					 s[i - 1] == 9 || s[i - 1] == 10 ||/*tabs and newline*/
					 s[i - 1] == 40 || s[i - 1] == 41 ||/*( and )*/
					 s[i - 1] == 59 || s[i - 1] == 63 ||/*; and ?*/
					 s[i - 1] == 44 || s[i - 1] == 46 ||/*comma and dot*/
					 s[i - 1] == 123 || s[i - 1] == 125) &&/*{ and }*/
					 (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
		}
		i++;
	}

	return (s);
}
