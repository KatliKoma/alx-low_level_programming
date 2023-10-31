#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count.
 * @av: argument vector.
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	int total_length = 0;

	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
	}

	total_length += ac - 1 + 1;

	char *result = (char *)malloc(total_length * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	int index = 0;

	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
		{
			result[index] = av[i][j];
			index++;
		}
		if (i < ac - 1)
		{
			result[index] = '\n';
			index++;
		}
	}
	return (result[index] = '\0');
}
