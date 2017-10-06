#include <stdio.h>
/**
 * main - prints function name/ first arg
 * @argc: arg count
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
