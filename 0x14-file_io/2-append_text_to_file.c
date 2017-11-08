#include "holberton.h"
/**
 * append_text_to_file - appends to end of file
 * @filename: name of file to append to
 * @text_content: content to append to file
 *
 * Return: -1 on fail 1 or success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int wErr = 1;
	int nFile;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	nFile = open(filename, O_WRONLY | O_APPEND);
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
