#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if trailing num is pos,negative, zero
 *
 * Description: this function uses fprintf
 * to print the value of a rand number tail
 * Return: 0
 */
int main(void)
{
	int n;
	int lastN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastN = n % 10;

	if (lastN > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastN);
	else if (lastN == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastN);
	else if (lastN < 6)
		printf("Last digit of %d is %d and is and is less than 6 and not 0\n",
		n, lastN);

	return (0);
}
