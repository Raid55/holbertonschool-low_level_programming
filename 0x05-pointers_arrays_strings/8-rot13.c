#include "holberton.h"
/**
 * rot13 - convert to rot13
 * @s: source string
 *
 * Return: char pointer
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char *template = "anANboBOcpCPdqDQerERfsFSgtGThuHUivIVjwJWkxKXlyLYmzMZ"
		"naNAobOBpcPCqdQDreREsfSFtgTGuhUHviVIwjWJxkXKylYLzmZM";

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
