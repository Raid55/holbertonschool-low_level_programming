#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds and prints all args, only numbers
 * @argc: arg count
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argc > i)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]), i++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", sum);
	return (0);
}
