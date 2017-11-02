#include "holberton.h"
/**
 * binary_to_uint - turns binary to unsigned int
 * @b: string containing binary
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int num = 0;

	while (b[i])
	{
		if (b[i] == '1') 
            num = num << 1 | 1;
		else if (b[i] == '0') 
            num = num << 1;
        else 
            return (0);
		i++;
	}
	return (num);
}
