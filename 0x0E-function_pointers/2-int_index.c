#include "function_pointers.h"

/**
 * int_index - runs over array with function
 * @array: array to run over
 * @size: size of array
 * @cmp: says yes or no
 *
 * Return: returns element that matches function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
		if (cmp(array[i++]))
			return (--i);

	return (-1);
}
