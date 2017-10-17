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
char *_strcpy(char *src)
{
	int i = 0;
	char *dest;

	dest = malloc(sizeof(char) * _strlen(src) + 1);
	if (dest == NULL)
		return (NULL);

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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

	N = _strcpy(name);
	O = _strcpy(owner);

	doge->name = N;
	doge->owner = O;
	doge->age = age;

	return (doge);
}
