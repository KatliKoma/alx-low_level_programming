#include <stdio.h>


int main(void)
{
	char alph;

	for (alph = 'a'; alph >= 'a' && alph <= 'z' ; alph++)
	{
		putchar(alph);
		putchar(toupper(alph));
	}
	putchar('\n');
	return (0);
}
