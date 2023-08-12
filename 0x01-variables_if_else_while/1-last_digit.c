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

	int l = n % 10;

	if (l > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
