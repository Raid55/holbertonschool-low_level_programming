#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - string length
 * @s: string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return(i);
}
/**
 * _strcpy - copy a string from on address to another
 * @dest: destination
 * @src: source to copy
 *
 * Return: pointer of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
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
	dog_t *doge;	
	char *N;
	char *O;

	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
		return(NULL);
	N = malloc(_strlen(name) + 1);
	if (N == NULL)
		return (NULL);
	O = malloc(_strlen(owner) + 1);
	if (O == NULL)
		return (NULL);

	_strcpy(N, name);
	_strcpy(O, owner);

	doge->name = N;
	doge->owner = O;
	doge->age = age;
	return (doge);
}
