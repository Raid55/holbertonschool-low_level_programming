#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - does what calloc does but not really since we arent init ing it
 * @nmemb: elements
 * @size: size of arr
 * 
 * Return: pointer to arr or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	return (a);
}
