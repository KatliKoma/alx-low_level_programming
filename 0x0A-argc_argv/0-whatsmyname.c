#include <stdio.h>

/**
 * main - prints its name, and line
 * @argCount:  count as an argument
 * @argv:  vector as an argument
 *
 * Return: 0
 */
int main(int argCount, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argCount;
	return (0);
}
