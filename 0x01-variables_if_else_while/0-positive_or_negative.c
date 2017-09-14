#include <stdlib.h>
#include <time.h>
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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);

	return (0);
}
