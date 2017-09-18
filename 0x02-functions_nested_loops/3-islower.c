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
	if (c >= 65 && c < 90)
		return (0);
	else
		return (1);

}
