#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 *@argc: count as an argument
 *@argv: vector as an argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc;)
	{
		count++;
		(*argv)++;
	}
	printf("%d\n", count - 1);
	return (0);
}
