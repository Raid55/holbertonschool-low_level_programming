#include "holberton.h"

/**
 * swap_int - takes address and changes value
 * @a: int a to be swapped
 * @b: int b to be swapped
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
