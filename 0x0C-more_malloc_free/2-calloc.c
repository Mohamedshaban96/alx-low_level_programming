#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate memory in heap with all bytes value assigned with 0
 * @nmemb: number of array elements
 * @size: size of an element of the array
 * Return: pointer to the reserved space or NULL in case of errors .
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *ar;
	char *cha;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(size * nmemb);

	if (ar == NULL)
		return (NULL);
	cha = ar;

	while (i < (nmemb * size))
	{
		cha[i] = 0;
		i++;
	}
	return (cha);
}

