#include "dog.h"

/**
 * init_dog - inits a doge with stuff
 * @d: pointer to doge structure
 * @name: string name to add
 * @age: age of doge
 * @owner: owner in string format
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
