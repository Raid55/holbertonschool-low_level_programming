#include "holberton.h"
/**
 * get_bit - gets bit at certain index
 * @n: int to turn into base 2
 * @index: index what bit to extract
 *
 * Return: int at bit pos
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	if (n <= 1)
	{
		if (!index)
			return (n);
		else
			return (-1);
	}
	else
	{
		if (!index)
			return (n % 2);
		return (get_bit(n / 2, index - 1));
	}
}
