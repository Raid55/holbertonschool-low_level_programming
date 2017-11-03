#include "holberton.h"
/**
 * get_bit - gets bit at index using shift
 * @n: num to analize for bit at index
 * @index: pos to extract bit
 *
 * Return: 1 ro 0 depending on which bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*checks for size of long int * 4 for to check if index is realistic pos*/
	if (index > sizeof(unsigned long int) * 4)
		return (-1);
	/*number will evaluate to 1 or 0 after the shift and AND statment*/
	/*by shifting it to the index we then use 1 and AND to extract*/
	/*first bit out and return result*/
	return ((n >> index) & 1);
}
