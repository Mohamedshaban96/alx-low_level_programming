#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes taken from s2
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *new;

	if (s1 == NULL)
	{
		s1 = "";
		i = 0;
	}
	else
		while (s1[i] != '\0')
			i++;

	if (s2 == NULL)
	{
		s2 = "";
		j = 0;
	}
	else
	{
		while (s2[j] != '\0')
			j++;
	}
	if (n >= j)
		n = j;

	new = malloc(sizeof(char) * (i + n + 1));
	if (new == NULL)
		return (NULL);
	return (new);
}
