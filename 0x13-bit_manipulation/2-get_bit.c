#include "holberton.h"
/**
 * get_bit_helper - helps the function with all of the logic
 * @n: number to extract bit from
 * @index: index pos to extract bit info
 *
 * Return: 1 or 0 depending one what byte or -1 on error
 */
int get_bit_helper(unsigned long int n, unsigned int index)
{
	if (n != 0)
	{
		if (n & 1)
		{
			n = n >> 1;
			if (index == 0)
				return (1);
			return (get_bit_helper(n, index - 1));
		}
		else
		{
			n = n >> 1;
			if (index == 0)
				return (0);
			return (get_bit_helper(n, index - 1));
		}
	}
	return (-1);
}
/**
 * get_bit - starts the get bit func, uses same logic as last ex
 * @n: num to analize for bit at index
 * @index: pos to extract bit
 *
 * Return: 1 ro 0 depending on which bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if (index == 0)
		return (n & 1);
	else
		return (get_bit_helper(n, index));
}
