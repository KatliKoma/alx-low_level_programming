#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'When I was having that alphabet soup, I never thought that it would pay off'
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
