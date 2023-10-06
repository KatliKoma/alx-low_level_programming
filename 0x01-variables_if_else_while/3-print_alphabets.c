#include <stdio.h>


int main(void)
{
	char alph;

	for (alph = 'a'; alph >= 'a' && alph <= 'z' ; alph++)
	{
		putchar(alph);
		putchar(alph-32);
	}
	putchar('\n');
	return (0);
}
