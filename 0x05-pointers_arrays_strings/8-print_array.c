#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elemments
 *
 * @a: string
 * @n: number of elements
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%i", a[i]);
		}
		else
			printf("%i, ", a[i]);
	}
	printf("\n");
}
