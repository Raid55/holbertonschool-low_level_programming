#include "holberton.h"
/**
 * _abs - gives you a six pack
 * @i: number to be checked
 *
 * Description: returns a numbers absolute value
 * in a cool way
 * Return: numbers absolut counterpart
 */
int _abs(int i)
{

	if (i > 0)
		return (i);
	else
		return (i - i - i);

}
