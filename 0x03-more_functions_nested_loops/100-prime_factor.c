#include <stdio.h>
#include "holberton.h"
/**
 * _isdigit - checks if char is digit
 * @c: digit to be checked
 *
 * Description: checks if digit
 * in a cool way
 * Return: 1 or 0
 */
int main(void)
{
	int i;
	long n = 612852475143;

    for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			 n /= i;
			 i--;
		}				        
	}
	printf("%d\n", i);
	return (0);
}
