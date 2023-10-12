#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*prints alphabet in lowecase
*
*return 0
*/

/* this function print the alphabet*/
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
}
