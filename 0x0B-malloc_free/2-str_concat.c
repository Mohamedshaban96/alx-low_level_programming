#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concat 2 strings
 *
 * @s1: the starting string
 * @s2: the following string
 * Return: NULL or pointer to the new array
 */
char *str_concat(char *s1, char *s2)
{
	char *cs;
	int i = 0, j = 0, k, l;

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

	k = j + i + 1;
	cs = malloc(sizeof(char) * k);
		if (cs == NULL)
			return (NULL);

	for (l = 0; l < i; l++)
		cs[l] = s1[l];
	for (l = 0; l < j; l++)
		cs[l + i] = s2[l];
	cs[l] = '\0';
	return (cs);
}
