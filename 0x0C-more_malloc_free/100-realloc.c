#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocate memory
 * @ptr: pointer to already allocated block of space
 * @old_size: the previous space
 * @new_size: the new size
 *
 * Return: ptr to the new space reserved or NULL if errors
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newp;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newp = malloc(new_size);
		if (newp == NULL)
			return (NULL);
		else
			return (newp);
	}

	newp = malloc(new_size);
	if (newp == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)newp + i) = *((char *)ptr + i);

	free(ptr);

	return (newp);
}
