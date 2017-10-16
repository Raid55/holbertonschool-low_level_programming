#include "dog.h"
#include <stdio.h>
/**
 * print_god - prints doges all over the screen
 * @d: pointer to doge structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", "(nil)");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
