#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*prints alphabet in lowecase
*
*return 0
*/

/* this function print the alphabet*/
int print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
