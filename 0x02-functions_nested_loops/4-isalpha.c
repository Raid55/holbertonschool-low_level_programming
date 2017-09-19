#include "holberton.h"
/**
 * _isalpha - checks if char is alpha
 * @c: letter to be checked
 *
 * Description: checks if alpha character
 * in a cool way
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) ||
			(c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
