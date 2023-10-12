#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_alphabet_x10- entry point
 *
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char alph;

	for (i = 0; i < 10; i++)
	{
		/*cycles throught the loop*/
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			putchar(alph);
		}
		putchar('\n');
	}

}
