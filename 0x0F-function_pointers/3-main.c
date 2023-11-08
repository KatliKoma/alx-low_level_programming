#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - The main function of the simple calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if the program executed successfully, 98 if the number of
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	int num1 = atoi(argv[1]);
	char *operator = argv[2];
	int num2 = atoi(argv[3]);

	int (*calc_func)(int, int);

	calc_func = get_op_func(operator);

	if (!calc_func)
	{
		printf("Error\n");
		return (99);
	}

	int result = calc_func(num1, num2);

	printf("%d\n", result);

	return (0);
}
