#include "holberton.h"
/**
 * create_file - creates a file if not created alredy and populates it
 * @filename: name of the file
 * @text_content: content to populate file with
 *
 * Return: 1 or -1 depending on true or false
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int wErr;
	int nFile;

	if (filename == NULL)
		return (-1);

	nFile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (nFile == -1)
		return (-1);

	while (text_content[i])
		i++;

	if (text_content)
		wErr = write(nFile, text_content, i);

	if (wErr == -1)
		return (-1);

	return (1);
}
