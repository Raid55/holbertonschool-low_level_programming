#include "dog.h"

/**
 * new_dog - new dog on the block
 * @name: name of dawg
 * @age: age of dawg
 * @owner: owner of doggie
 *
 * Return: a dawg
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (!name && !owner)
		return (0);

	dog_t doge = { .name = name, .age = age, .owner = owner};
	dog_t *d = &doge;
	
	return (d);
}
