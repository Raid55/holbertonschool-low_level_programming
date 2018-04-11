#include "search_algos.h"

/**
 * binary_search - binary seach
 * @array: array to search thru
 * @size: size of arr
 * @value: value to search for
 *
 * Return: -1 on fail or index where match is
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int start = 0;
	int mid;
	int end = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		i = start;
		printf("Searching in array: ");
		while (i <= end)
		{
			if (i + 1 == end + 1)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
			i++;
		}
		printf("\n");

		mid = (start + end) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
