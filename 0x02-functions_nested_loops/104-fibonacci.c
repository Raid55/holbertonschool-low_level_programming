#include <stdio.h>

/**
 * main - prints fib numbers to 98
 *
 * Description: prints fib numbers
 * in a cool way
 * eturn: 0
 */
int main(void)
{
	unsigned long fib = 1, fib2 = 2, fib3 = 0;
	int i = 0;

	printf("%lu, %lu, ", fib, fib2);
	hile (i <= 95){
		fib3 = fib + fib2;
		if (i == 95)
			printf("%lu\n", fib3);
		else
			printf("%lu, ", fib3);
		fib = fib2;
		fib2 = fib3;
		i++;
	}
	return (0);
}
