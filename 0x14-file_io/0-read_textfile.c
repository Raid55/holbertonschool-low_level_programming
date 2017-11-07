#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int tmp;
	char *buff[2048];

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	
	tmp = read(file, buff, letters);
	buff[letters] = '\0';

	write(1, buff, letters);

	close(file);

	return (tmp);
}
