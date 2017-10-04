#include "holberton.h"
/**
 * helper - helps the sqrt recurse
 * @x: sqrt intrementor
 * @n: number to bw sqrted
 *
 * Return: sqrt
 */
int helper(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (helper(x + 1, n));
}
/**
 * _sqrt_recursion - sqrt of n
 * @n: number to b sqrted
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helper(0, n));
}
