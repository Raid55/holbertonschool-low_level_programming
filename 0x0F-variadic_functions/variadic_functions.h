#ifndef VARIAD
#define VARIAD

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct formType - structure for types of chars
 *
 * @flag: format flag to look for
 * @func: function to run
 */
typedef struct formType
{
	char flag;
	void (*func)(va_list);
} formatType;

#endif
