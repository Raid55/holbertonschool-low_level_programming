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
	int ac = 0;

	va_start(valist, format);
	while (format[i++] != '\0')
		if (format[i - 1] == 'c' || format[i - 1] == 'i' ||
			format[i - 1] == 'f' || format[i - 1] == 's')
			ac++;
	i = 0;
	while (ac)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), ac--;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), ac--;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), ac--;
				break;
			case 's':
				printf("%s", va_arg(valist, char *)), ac--;
				break;
			default:
				i++;
				continue;
		}
		if (ac != 0)
			printf(", ");
		i++;
	}
	va_end(valist);
	/*mandatory \n... i hate mandatory things...but hey..its mandatory!!!*/
	printf("\n");
}
