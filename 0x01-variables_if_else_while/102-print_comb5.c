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
	int rNum = 0, lNum = 0, _rNum = 0, _lNum = 0;

	while (_lNum <= 9)
	{
		while (_rNum <= 9)
		{
			while (lNum <= 9)
			{
				while (rNum <= 9)
				{
					putchar(_lNum + '0');
					putchar(_rNum + '0');
					putchar(' ');
					putchar(lNum + '0');
					putchar(rNum + '0');
					if (_lNum == 9 && _rNum == 9 && rNum == 9 && lNum == 9)
					{
						_lNum = 10, _rNum = 10, lNum = 10, rNum = 10;
						continue;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					rNum++;
				}
				rNum = 0;
				lNum++;
			}
			lNum = 0;
			_rNum++;
		}
		_rNum = 0;
		_lNum++;
	}
	putchar ('\n');
	return (0);
}
