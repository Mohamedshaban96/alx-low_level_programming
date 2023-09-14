#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index -  searches for an integer.
 * @array: the array we will search in
 * @size: size of the the array
 * @cmp:  a pointer to the function to be used to compare values
 * Return: f no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		cmp(array[i]);
		if (array[i] != 0)
			return (i);
		i++;
	}
	return (-1);
}
