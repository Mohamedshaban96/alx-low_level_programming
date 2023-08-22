#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string of type char
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s < '\0')
	{
		(*s)++;
		i++;

	}
	return (i);
}
