#include "holberton.h"

int main(int ac, char **av)
{
	int oFile;
	int nFile;
	int rErr = 1, wErr = 0;
	int err;
	char buff[1025];

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	oFile = open(av[1], O_RDONLY);
	if (oFile == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	
	nFile = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (nFile == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit (99);

	while (rErr != 0)
	{
		rErr = read(oFile, buff, 1024);
		wErr = write(nFile, buff, rErr);
		if (wErr == -1)
			dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	
	err = close(oFile);
	if (err == -1)
		dprintf(2, "Error: Can't close fd %i\n", oFile), exit(100);
	err = close(nFile);
	if (err == -1)
		dprintf(2, "Error: Can't close fd %i\n", nFile), exit(100);

	return (1);
}
