#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'lets cycle through numbers'
 *@parameter: between 0-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d", i);
	}
		putchar('\n');
	return (0);
}
