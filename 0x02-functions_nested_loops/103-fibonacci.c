#include <stdio.h>

/**
 * main - prints sum of only evens fib
 *
 * Description: prints sum of even  fib numbers up to 4mill
 * in a cool way
 * Return: 0
 */
int main(void)
{
	long fib = 1, fib2 = 2, fib3 = 0;
	long sum = 2;

	while (fib3 <= 4000000)
	{
		fib3 = fib + fib2;
		if (fib3 > 4000000)
			continue;
		fib = fib2;
		fib2 = fib3;
		if (fib3 % 2 == 0)
			sum += fib3;
		else
			continue;
	}
	printf("%ld\n", sum);
	return (0);
}
