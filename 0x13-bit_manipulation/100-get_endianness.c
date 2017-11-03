#include "holberton.h"
/**
 * get_endianness - gets endianness of machine
 *
 * Return: 1 or 0 depending on endianness
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
