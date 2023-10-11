#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'More alphabets'
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph >= 'a' && alph <= 'z' ; alph++)
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return (0);
}
