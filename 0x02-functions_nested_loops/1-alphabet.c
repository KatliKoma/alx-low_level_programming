#include <stdio.h>
#include <stdlib.h>

/**
 * prints alphabet in lowecase
 *
 * no return.
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph >= 'a' && alph <= 'z' ; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
