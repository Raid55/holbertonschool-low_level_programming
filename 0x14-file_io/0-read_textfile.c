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
	char *buff = malloc(sizeof(char) * letters + 1);

	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	tmp = read(file, buff, letters);
	buff[letters] = '\0';

	write(1, buff, letters);

	close(file);
	free(buff);

	return (tmp);
}
