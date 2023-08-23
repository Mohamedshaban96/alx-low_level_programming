#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, j;
	char k;

	i = _strlen(char *s);

	i--;
	j = 0;
	while (i >= 0)
	{
			k = s[i];
			s[i] = s[j];
			s[j] = k;
			i--;
			j++;
	}
}
