#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'The last digit'
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* isolating the last digit */
	lastNum = n % 10;
	/*checking if the number is greter than 5*/
	if (lastNum < 6 && lastNum != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	else if (lastNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	else if (lastNum == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	return (0);
}
