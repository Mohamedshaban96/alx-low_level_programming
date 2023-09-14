#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: the array
 * @size: size of the array
 * @action: action is a pointer to the function you need to use
 *
 * Return: Always 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;


	if (array != NULL && action != NULL)
		while (i < size)
		{
			action(array[i]);
				i++;
		}
}
