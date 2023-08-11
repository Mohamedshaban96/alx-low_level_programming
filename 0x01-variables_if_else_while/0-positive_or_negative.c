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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
