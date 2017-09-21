#include "holberton.h"
/**
 * _isupper - checks if char is upper alpha
 * @c: letter to be checked
 *
 * Description: checks if alpha upper character
 * in a cool way
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
