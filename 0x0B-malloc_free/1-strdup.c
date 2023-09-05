#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - duplicate a string in a reserved memory in heap
 *
 * @str: a pointer to the string that will be copied
 * Return: NULL in case of errors, a pointer to dup string if success
 */

char *_strdup(char *str)
{
	char *ns;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	i++;
	ns = malloc(sizeof(char) * i);

	if (ns == NULL)
		return (NULL);

	while (j < i)
	{
		ns[j] = str[j];
		j++;
	}
	return (ns);
}

