#include "main.h"

/**
 * reverse_array -  reverse a given array
 * @a: the array to be reversed
 * @n: number of elements of the array
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (n > i)
{
		j = *(a + i);
		*(a + i) = *(a + (n - 1));
		*(a + (n - 1)) = j;
		n--;
		i++;       }
}
