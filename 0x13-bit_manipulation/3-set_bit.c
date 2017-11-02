#include "holberton.h"
/**
 * set_bit - sets bit to 1 at index
 * @n: number to manipulate
 * @index: place to change bit to 1
 *
 * Return: 1 on success -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	/*returns -1 if larger than int bit val*/
	if (index > 32)
		return (-1);

	/*uses 1 bit value and the shift 0 fill property to shit one to spot*/
	/*then use or gate to convert 0 to 1 if 0, not AND in case its alredy 1*/
	i = i << index;
	*n = *n | i;

	return (1);
}
