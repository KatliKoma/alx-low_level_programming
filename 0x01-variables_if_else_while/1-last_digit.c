#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* isolating the last digit */
	lastNum = n % 10;
	/*checking if the number is greter than 5*/
	if (lastNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	/*checking if number is less than 6*/
	if (lastNum < 6 && lastNum > 0)
		printf("Last number of %d is %d and is less than 6\n", n, lastNum);
	/*checking if number is equal to zero*/
	else if (lastNum == 0)
		printf("Last number of %d is %d and is 0\n", n, lastNum);
	return (0);
}
