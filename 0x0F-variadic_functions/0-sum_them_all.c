#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all args
 * @n: number of args
 *
 * Return: sums of int args
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list valist;

	va_start(valist, n);

	i = 0, sum = 0;
	while (i < n)
		sum += va_arg(valist, int), i++;

	va_end(valist);

	return (sum);
}
