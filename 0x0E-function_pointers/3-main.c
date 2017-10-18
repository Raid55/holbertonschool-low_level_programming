#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - mini cmd calculator
 * @argc: arg count
 * @argv: argument arr
 *
 * Return: functions status
 */
int main(int argc, char *argv[])
{
	int (*final_operator)(int, int);
	int num1;
	int num2;

	if (argc != 4)
		printf("Error\n"), exit(98);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' && num2 == 0) ||
			(argv[2][0] == '%' && num2 == 0))
		printf("Error\n"), exit(100);

	final_operator = (get_op_func(argv[2]));

	if (final_operator == NULL)
		printf("Error\n"), exit(99);
	else
		printf("%d\n", final_operator(num1, num2));

	return (0);
}
