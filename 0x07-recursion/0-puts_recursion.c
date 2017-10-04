#include "holberton.h"

/**
 * _puts_recursion - puts chars without loops
 * @s: string to be put TO DEATH!!!no im just kidding around...
 *
 * Return: void coupon thats also expired
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
