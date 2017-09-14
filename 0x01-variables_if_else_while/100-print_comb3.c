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
	int lNum = 0, rNum = 0;

	while (lNum <= 9)
	{
		while (rNum <= 9)
		{
			if (lNum == rNum)
			{
				rNum++;
				continue;
			}
			else if (rNum > lNum)
			{
				putchar(lNum + '0');
				putchar(rNum + '0');
				if (lNum == 8 && rNum == 9)
				{
					lNum++;
					rNum++;
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				rNum++;
				continue;
			}
			else
			{
				rNum++;
				continue;
			}
		}
		rNum = 0;
		lNum++;
	}
	putchar ('\n');
	return (0);
}
