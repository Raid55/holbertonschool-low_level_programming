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
	char template[] = {'a', 'n', 'A', 'N', 'b', 'o', 'B', 'O', 'c', 'p', 'C',
		'P', 'd', 'q', 'D', 'Q', 'e', 'r', 'E', 'R', 'f', 's', 'F', 'S', 'g',
		't', 'G', 'T', 'h', 'u', 'H', 'U', 'i', 'v', 'I', 'V', 'j', 'w', 'J',
		'W', 'k', 'x', 'K', 'X', 'l', 'y', 'L', 'Y', 'm', 'z', 'M', 'Z', 'n',
		'a', 'N', 'A', 'o', 'b', 'O', 'B', 'p', 'c', 'P', 'C', 'q', 'd', 'Q',
		'D', 'r', 'e', 'R', 'E', 's', 'f', 'S', 'F', 't', 'g', 'T', 'G', 'u',
		'h', 'U', 'H', 'v', 'i', 'V', 'I', 'w', 'j', 'W', 'J', 'x', 'k', 'X',
		'K', 'y', 'l', 'Y', 'L', 'z', 'm', 'Z', 'M'};
	/* char *template = "anANboBOcpCPdqDQerERfsFSgtGThuHUivIVjwJWkxKXlyLYmzMZ\ */
/* naNAobOBpcPCqdQDreREsfSFtgTGuhUHviVIwjWJxkXKylYLzmZM"; */

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
