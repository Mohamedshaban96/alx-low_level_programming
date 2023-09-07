#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function to allocate memory
 * @b: the mount of byts to be allocated
 * Return: exit 98 if fail , 0 if sucess.
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
