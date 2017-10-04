#include "holberton.h"

/**
 * _print_rev_recursion - puts chars without loops in rev
 * @s: string to be put in reverse
 *
 * Return: void milk carton
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
