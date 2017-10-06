#include <stdio.h>
#include <stdlib.h>
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
		if (atoi(argv[i]) != 0)
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
}
