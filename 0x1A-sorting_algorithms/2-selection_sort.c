#include "sort.h"

/**
 * selection_sort - selection sort algo
 * @array: array to be sorted
 * @size: size of array to sort
 *
 * Return: sorted array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, k;
	int tmp;

	if (!array || size <= 1)
		return;

	while (i < size - 1)
	{
		k = i, j = i + 1;
		while (j < size)
		{
			if (array[j] < array[k])
				k = j;
			j++;
		}
		/*Swaping action*/
		tmp = array[k];
		array[k] = array[i];
		array[i] = tmp;

		/*Print and Incr*/
		print_array(array, size);
		i++;
	}
}
