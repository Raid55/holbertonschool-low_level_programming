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

	while (format[i] && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i': 
				printf("%d", va_arg(valist, int));
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
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		else 
			printf("\n");
		i++;
	}
	va_end(valist);
	/*mandatory \n... i hate mandatory things...but hey..its mandatory!!!*/
	return;
}
