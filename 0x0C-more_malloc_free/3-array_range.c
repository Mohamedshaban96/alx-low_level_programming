#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers from given start point
 * @min: starting int
 * @max: end inr
 *
 * Return: pointer to the newly created array or NULL if fail
 */

int *array_range(int min, int max)
{
	int i, j;
	int *ar;

	if (min > max)
		return (NULL);

	i = max - min + 1;

	ar = malloc(sizeof(int) * i);

	if (ar == NULL)
		return (NULL);

	j = 0;
	while (j < i)
	{
		ar[j] = min++;
		j++;
	}
	return (ar);
}
