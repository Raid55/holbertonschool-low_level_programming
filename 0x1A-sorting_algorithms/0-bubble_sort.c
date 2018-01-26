#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t j = 0;
	size_t i = size - 1;
	int tmp;

	while (i)
	{
		while(j != i)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
			j++;
		}
		j = 0;
		i--;
	}
}
