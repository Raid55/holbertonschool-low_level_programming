#include "holberton.h"
/**
 * reverse_array - reverses int array
 * @a: array to reverse
 * @n: n of bytes
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	n = n - 1;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++, n--;
	}
}
