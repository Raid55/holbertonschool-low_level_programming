#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Outputs pos,negative,or zero
 *
 * Description: this function uses fprintf
 * to print the value of a rand number
 * Return: 0
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
