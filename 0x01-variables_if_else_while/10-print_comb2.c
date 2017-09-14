#include <stdio.h>

/**
 * main - prints all 2 number combinations
 *
 * Description: this function uses putchar
 * to print the all 00 number combination
 * Return: 0
 */
int main(void)
{
	int rNum = 0;
	int lNum = 0;

	while (rNum <= 9)
	{
		while (lNum <= 9)
		{
			putchar(rNum + '0');
			putchar(lNum + '0');

			if (rNum == 9 && lNum == 9)
			{
				lNum++;
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}

			lNum++;
		}

		rNum++;
		lNum = 0;
	}

	putchar ('\n');
	return (0);

}
