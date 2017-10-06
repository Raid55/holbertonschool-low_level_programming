#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints arg 1 times arg 2
 * @argc: arg count
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
