#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints all, no matter where your from... now THIS is diversity!
 * @format: string with format queues
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0;
	char *stringTestCase;

	va_start(valist, format);

	while (format[i] && format)
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				stringTestCase = va_arg(valist, char *);

				if (!stringTestCase)
					stringTestCase = "(nil)";

				printf("%s", stringTestCase);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	/*mandatory \n... i hate mandatory things...but hey..its mandatory!!!*/
	printf("\n");
	va_end(valist);
}
