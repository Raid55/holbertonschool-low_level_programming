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
	unsigned int i = 0;

	tmp = n ^ m;
	if (tmp == 0)
		return (0);

	while (i <= sizeof(unsigned long int) * 4)
	{
		sum += (tmp >> i) & 1;
		i++;
	}
	return (sum);
}
