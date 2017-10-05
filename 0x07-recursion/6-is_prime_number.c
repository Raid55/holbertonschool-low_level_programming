#include "holberton.h"
/**
 * helper - helps prime number function
 * @i: incr
 * @n: prime num to b checked
 *
 * Return: 1 or 0
 */
int helper(int i, int n)
{
	if (i < 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (helper(i - 1, n));
}
/**
 * is_prime_number - checks if n is optimus prime...
 * @n: number to be primed
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	return (helper(n / 2, n));
}
