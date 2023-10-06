#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* main - Entry point*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0) //if number is greater than zero
	printf("%d is positive\n", n);
	if (n < 0) // if number is less than zero
	printf("%d is negative\n", n);
	else if (n == 0) // if number is equal to zero
	printf("%d is zero\n", n);
	return (0);
}
