#include "main.h"

/**
 * rev_string - reverse a s tring
 *
 * @s: the string itself
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, j;
	char k;

	i = 0;
	j = 0;
	while (s[i++] != '\0')
		j++;
	j--;
	i = 0;
	while (j > i)
{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
		i++;
		j--;
	}
}
