#include <stdio.h>

/**
 * main - loads and prints all c datatypes
 * @argc: number of arguments passed
 * @argv: array of args passed
 *
 * Description: Pretty self explanatory
 * This loads data up at its initial state and prints it
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char character;
	int integer;
	long int longInteger;
	long long int longLongInteger;
	float iceCreamFloat;

	printf("Size of a char: %ld byte(s)\n", sizeof(character));
	printf("Size of an int: %ld byte(s)\n", sizeof(integer));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longInteger));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongInteger));
	printf("Size of a float: %ld byte(s)\n", sizeof(iceCreamFloat));
	return (0);
}
