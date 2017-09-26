#include "holberton.h"
#include <stdio.h>
/**
 * _pow - to the power of
 * @l: left number ^
 * @r: ^ right
 *
 *
 * return: l ^ r
 */
int _pow(int l, int r)
{
	int tmp = l;

	if (r == 0)
		return (1);
	else if (r == 1)
		return (10);
	for (; r > 1; r--)
		tmp = tmp * l;
	return (tmp);
}

/**
 * _atoi - prints first digits in a string
 * @s: string to be scanned for num
 *
 *
 * Return: number in INT form
 */
int _atoi(char *s)
{
	int i = 0, j = 0, l = 0; /*Disposable incrementors*/
	char sign = '\0'; /*always plus or minus depending on string*/
	int total = 0; /*Total output*/
	int isThereANum = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			isThereANum = 1;
		i++;
	}
	i = 0;
	if (s[0] == '\0' || isThereANum != 1)
		return (0);
	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			j++;
		i++;
	}
	if (j % 2 == 0)
		sign = '+';
	else
		sign = '-';
	j = 0, l = i;
	while (s[i] >= '0' && s[i] <= '9')
		j++, i++;
	while (s[l] >= '0' && s[l] <= '9')
	{
		total += (_pow(10, j - 1)) * (s[l] - '0');
		j--, l++;
	}
	if (sign == '-')
		total = total * -1;
	return (total);

}

