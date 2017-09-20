#include <stdio.h>

/**
 * main - prints fib numbers to 50
 *
 * Description: prints fib numbers
 * in a cool way
 * Return: 0
 */
int main(void)
{
	long fib = 1, fib2 = 2, fib3 = 0;
	int i = 0;

	printf("%ld, %ld, ", fib, fib2);
	while (i <= 47)
	{
		fib3 = fib + fib2;
		if (i == 47)
			printf("%ld\n", fib3);
		else
			printf("%ld, ", fib3);
		fib = fib2;
		fib2 = fib3;
		i++;
	}
	return (0);
}
