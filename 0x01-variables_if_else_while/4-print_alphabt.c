#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * if - to check something is true or fault and do action according to that
 *
 * Descreption: A program to diff between negative, positive or zero numbers
 *
 * Return: Always 0 Sucess
*/
int main(void)
{
	int y = 97;

	while (y < 123)
{
	if (y != 101 && y != 113)
	putchar (y);
	y = y + 1;
}
	putchar ('\n');


	return (0);
}
