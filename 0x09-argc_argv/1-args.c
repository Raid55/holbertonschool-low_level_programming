#include <stdio.h>
/**
 * main - prints how many args exepte for 1rst one
 * @argc: arg count
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
