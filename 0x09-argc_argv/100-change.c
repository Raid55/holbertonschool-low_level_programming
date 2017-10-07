#include <stdio.h>
#include <stdlib.h>
/**
 * main - counts minimum coins needed for cents
 * @argc: arg count
 * @argv: arguments array
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int num;
	int totalCoins = 0;
	int totalCents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	while (totalCents != num)
	{
		totalCents += coins[i], totalCoins++;
		if (totalCents > num)
			totalCents -= coins[i++], totalCoins--;

	}
	printf("%d\n", totalCoins);
	return (0);
}
