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
	int readTmp = 1;
	int wErr = 1;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file != -1)
		readTmp = read(file, buff, letters);
	else
		readTmp = 0;

	if (readTmp == -1)
		readTmp = 0;
	else
		wErr = write(STDOUT_FILENO, buff, readTmp);

	if (wErr == -1)
		readTmp = 0;

	close(file);
	free(buff);

	return (readTmp);
}
