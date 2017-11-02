#include "holberton.h"
/**
 * clear_bit - turns bit to 0 at index
 * @n: number to manipulate
 * @index: index to change
 *
 * Return: 1 on success and -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	/*if number larger than bits in int then ret null*/
	if (index > 32)
		return (-1);

	/*shifts 00000001 to pos at index then flips to 1111101111*/
	i = i << index;
	i = ~i;

	/*assignes 10010101 to AND 11111110111 that way we get final num*/
	*n = *n & i;

	return (1);
}
