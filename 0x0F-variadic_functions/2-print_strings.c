#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings in a varadical way
 * @separator: what to separtate with
 * @n: number of args passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	char *testCase;

	va_start(valist, n);

	i = 0;
	while (i < n)
	{
		testCase = va_arg(valist, char*);

		printf("%s", testCase == NULL ? testCase : "(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(valist);
}
