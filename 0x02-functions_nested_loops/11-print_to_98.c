#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers till it reaches 98
 *
 * @n: number to be checked
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
	if (n < 98)
	{
		printf("%d ,", n);
		n++;
	}
	else if (n > 98)
	{
		printf("%d ,", n);
		n--;
	}
	}
	printf("%d", n);
	printf("\n");
}
