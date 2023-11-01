#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Multiplies two numbers and prints the result
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int firstNum = atoi(argv[1]);

	int secondNum = atoi(argv[2]);
	int result = firstNum * secondNum;

	printf("%d\n", result);

	return (0);
}

