#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* function called*/
	printMess();
	return (0);
}

/*this function prints the message*/
void printMess(void)
{
	char message[] = "_putchar";
	int i = 0;

	while (message[i] != '\0')
	{
		putchar(message[i]);
		i++;
	}
	putchar('\n');

}
