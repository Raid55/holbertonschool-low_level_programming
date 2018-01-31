#include "sort.h"

/**
 * quick_sort - quick sort array
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size <= 1)
		return;
	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * quick_sort_helper - recursive function to help quick sort
 * @array: array to be sorted
 * @start: start of partition
 * @end: end of partition
 * @size: size of full array
 */
void quick_sort_helper(int *array, int start, int end, size_t size)
{
	int partition;

	if (start < end)
	{
		partition = lomutos_partition(array, start, end, size);

		quick_sort_helper(array, start, partition - 1, size);
		quick_sort_helper(array, partition + 1, end, size);
	}
}

/**
 * lomutos_partition - lomutos partitioning function
 * @arr: array to sort
 * @start: start of partition
 * @end: end of partition
 * @size: size of full array
 *
 * Return: location of partition start
 */
int lomutos_partition(int *arr, int start, int end, size_t size)
{
	int pivot = arr[end];
	int j = start - 1;
	int i = start;

	while (i <= end - 1)
	{
		if (arr[i] <= pivot)
			if (i != ++j)
				swap(&arr[j], &arr[i]), print_array(arr, size);
		i++;
	}
	if (arr[j + 1] > pivot)
		swap(&arr[j + 1], &arr[end]), print_array(arr, size);
	return (j + 1);
}

/**
 * swap - swap 2 items in an array
 * @arrA: first item
 * @arrB: second item
 */
void swap(int *arrA, int *arrB)
{
	int tmp;

	tmp = *arrA;
	*arrA = *arrB;
	*arrB = tmp;
}
