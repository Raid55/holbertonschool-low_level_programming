#include "holberton.h"
/**
 * _islower - checks if letter is lowercase
 * @c: letter to be checked
 *
 * Description: checks lowercase
 * in a cool way
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
