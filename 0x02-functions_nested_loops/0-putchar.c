#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printMess();
	return (0);
}
/**
 * This function prints the message.
 */
void printMess(void)
{
	char message[] = "_putchar";
	printf("%c\n", message);

}

