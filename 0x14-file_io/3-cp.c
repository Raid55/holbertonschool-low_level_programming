#include "holberton.h"
/**
 * main - does what cp does...man cp
 * @ac: arg count
 * @av: arg array
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int oFile;
	int nFile;
	int rErr = 1, wErr = 0;
	int err;
	char buff[1025];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (!av[1])
		__read_err(av[1]);
	if (!av[2])
		__write_err(av[2]);

	oFile = open(av[1], O_RDONLY);
	if (oFile == -1)
		__read_err(av[1]);

	nFile = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (nFile == -1)
		__write_err(av[2]);

	while (rErr != 0)
	{
		rErr = read(oFile, buff, 1024);
		if (rErr == -1)
			__read_err(av[1]);
		if (rErr != 0)
			wErr = write(nFile, buff, rErr);
		if (wErr == -1)
			__write_err(av[2]);
	}

	err = close(oFile);
	if (err == -1)
		__close_err(oFile);
	err = close(nFile);
	if (err == -1)
		__close_err(nFile);
	return (0);
}
/**
 * __read_err - read error and exit
 * @s: error file
 */
void __read_err(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s), exit(98);
}
/**
 * __write_err - writes error and exits
 * @s: error file
 */
void __write_err(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s), exit(99);
}
/**
 * __close_err - error on file close and exits
 * @d: descriptor
 */
void __close_err(int d)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", d), exit(100);
}
