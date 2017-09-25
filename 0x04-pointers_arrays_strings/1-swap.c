#include "holberton.h"

/**
 * swap_int - takes address and changes value
 * @n: address to be changed
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
