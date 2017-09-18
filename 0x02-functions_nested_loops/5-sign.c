#include "holberton.h"
/**
 * print_sign - finds number sign
 * @i: number to be checked
 *
 * Description: checks if int is pos, neg, or zero
 * in a cool way
 * Return: -, + or 0
 */
int print_sign(int i)
{

	if (i < 0)
		return (-3);
	else if (i > 0)
		return (-5);
	else
		return (0);

}
