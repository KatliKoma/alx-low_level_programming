#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'I play what I call the alphabet game'
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph >= 'a' && alph <= 'z' ; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
