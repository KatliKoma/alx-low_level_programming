#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'this program tests wheather n is negative or positive'
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*if n is greater than zero */
	if (n > 0)
	printf("%d is positive\n", n);
	/*if n is less than zero*/
	if (n < 0)
	printf("%d is negative\n", n);
	/* if number is equal to zero*/
	if (n == 0)
	printf("%d is zero\n", n);
	return (0);
}
