#include <stdio.h>

/**
 * main - Outputs to stderr
 *
 * Description: this function uses fprintf
 * to print to certain output, stderr
 * Return: 1
 */
int main(void)
{
	char tmp[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", tmp);
	return (1);
}
