#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *1-alphabet - print alphabet using putchar
 *
 *Return: no return.
 */

/**
 *print_alphabet prints the alphabet by cycling through a loop 
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
