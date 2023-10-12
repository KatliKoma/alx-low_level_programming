#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*prints alphabet in lowecase
*
*no return
*/

/*this function prints all the leters of the alphabet*/
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
