#include <stdio.h>
#include <stdlib.h>

/**
 * prints alphabet in lowecase
 *
 * no return.
 */
void print_alphabet(char alph)
{
	putchar(alph);
	return;
}

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		print_alphabet(alphabet);
		putchar('\n');
	}

	return (0);
}
