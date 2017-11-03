#include "holberton.h"
/**
 * flip_bits - finds how much bits need to be fliped for n and m to be same
 * @n: first num to compaire
 * @m: second num to comaire
 *
 * Return: int of difference between nums
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum = 0;
	unsigned long int tmp;

	tmp = n ^ m;

	while (tmp)
	{
		sum += tmp & 1;
		tmp >>= 1;
	}
	return (sum);
}
