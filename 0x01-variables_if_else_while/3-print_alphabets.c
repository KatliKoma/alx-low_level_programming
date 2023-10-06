#include <stdio.h>


int main(void)
{
	char alph;

	for (alph = 'a'; alph >= 'a' && alph <= 'z' ; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A'; alph >= 'A' && alph <= 'Z' ; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
