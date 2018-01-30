#include "sort.h"


void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, k;
	int tmp;
 
    while (i < size - 1)
    {
        k = i, j = i + 1;
        while (j < size)
		{
        	if (array[j] < array[k])
            	k = j;
			j++;
		}
		//Swap 
		tmp = array[k];
		array[k] = array[i];
		array[i] = tmp;
		//Print
		print_array(array, size);
		i++;
    }
}
