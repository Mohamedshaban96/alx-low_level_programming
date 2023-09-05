#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creat array of chars
 *
 * @size: the size of the array
 * @c: the char all the array are being filled with
 * Return: NULL in case of errors and pointer to array if sucess.
 */

char *create_array(unsigned int size, char c)
{
	char *AR;
	unsigned int i = 0;

	AR = malloc(sizeof(char) * size);
	if (AR == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
	AR[i] = c;
	i++;
	}
	return (AR);
}

