#include <stdio.h>


int main(void)
{
	char alph, lowAlph;

	for (alph = 'a'; alph >= 'a' && alph <= 'z' ; alph++)
	{
		lowAlph = tolower(alph);
		putchar(lowAlph);
	}
	putchar('\n');
	return (0);
}
