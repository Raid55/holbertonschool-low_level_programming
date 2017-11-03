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
	unsigned long int sum = 0;
	unsigned long int tmp;
	unsigned long int i = 0;

	tmp = n ^ m;

	while (i <= sizeof(unsigned long int) * 4)
	{
		sum += (tmp >> i) & 1;
		i++;
	}
	return (sum);
}
