#include "function_pointers.h"

/**
 * array_iterator - iterates over array with action
 * @array: array to run over
 * @size: size of array
 * @action: action to action on array int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
		action(array[i++]);
}
