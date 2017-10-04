#include "holberton.h"

/**
 * _pow_recursion - x to the power of y
 * @x: to be factored by
 * @y: le facteur nest pas passer! pirouete cacaouette
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
