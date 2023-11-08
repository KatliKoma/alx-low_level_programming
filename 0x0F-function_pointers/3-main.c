#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*calc_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	calc_func = get_op_func(operator);

	if (!calc_func)
	{
		printf("Error\n");
		return (99);
	}

	result = calc_func(num1, num2);
	printf("%d\n", result);

	return (0);
}

