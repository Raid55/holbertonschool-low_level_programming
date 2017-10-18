#include "function_pointers.h"
/**
 * print_name - prints name with function
 * @name: name
 * @f: function formating
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
