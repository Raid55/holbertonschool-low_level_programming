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
	int accu = 0, i = 0 ,tmp = 0, tmp2 = 0;

	while (tmp < 1024 || tmp2 < 1024)
	{
		tmp = 3 * i;
		tmp2 = 5 * i;
		if (tmp == tmp2)
			accu += tmp;
		else
			accu += tmp + tmp2;
		i++;
	}
	printf("%d\n", accu);

}
