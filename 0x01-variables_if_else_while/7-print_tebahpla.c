#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'lets do it in reverse'
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a' && alph <= 'z' ; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
