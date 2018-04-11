#include "search_algos.h"

/**
 * linear_search - Linear seach
 * @array: array to search thru
 * @size: size of arr
 * @value: value to look for
 *
 * Return: -1 on fail or index where match is
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
