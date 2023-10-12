#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_alphabet - entry point
 *
 *
 */
void print_alphabet(void)
{
	/*initiate char*/
	char alph;
	/*cycles throught the loop*/
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

}
