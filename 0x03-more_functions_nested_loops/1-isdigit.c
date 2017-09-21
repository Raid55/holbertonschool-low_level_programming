#include "holberton.h"
/**
 * _isdigit - checks if char is digit
 * @c: digit to be checked
 *
 * Description: checks if digit
 * in a cool way
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
