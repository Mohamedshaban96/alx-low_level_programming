#include "main.h"

/**
 * *string_toupper - replace lower case char with upper case one
 *
 * @i: the string containing the letters
 *
 * Return: Always 0.
 */
char *string_toupper(char *i)
{
	int j;

	j = 0;
	while (i[j] != '\0')

		if (i[j] > 96 && i[j] < 123)
		{
			i[j] = i[j] - 32;
		}
	i++;
	return (i);
}

