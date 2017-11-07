#include "holberton.h"
/**
 * read_textfile - reads a file and prints to buffer
 * @filename: name of file
 * @letters: amount of chars to be printed
 *
 * Return: number of chars printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int tmp;
	int err;
	char *buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file != -1)
		tmp = read(file, buff, letters);
	else
		tmp = 0;
	
	if (tmp == -1)
		tmp = 0;

	err = write(1, buff, letters);
	
	if (err == -1)
		tmp = 0;

	close(file);
	free(buff);

	return (tmp);
}
