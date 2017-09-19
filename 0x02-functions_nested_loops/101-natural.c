#include <stdio.h>
#include "holberton.h"

/**
 * natural - prints natural numbs
 *
 * Description: prints natural nums
 * in a cool way
 * Return: void
 */
void natural(void)
{
	int accu = 0, i = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			accu += i;
	}
	printf("%d\n", accu);

}
