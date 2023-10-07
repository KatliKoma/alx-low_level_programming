#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'lets cycle through numbers with a separator'
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d%c", i, i == 9 ? '\n' : ',');
	}
		putchar('\n');
	return (0);
}
