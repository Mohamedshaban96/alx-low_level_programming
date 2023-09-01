#include "main.h"

/**
 * *_strcat - a function to concatenate two strings
 *
 * @dest: the starting string
 * @src: the sollowing string
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];

		j++;
		i++;
}
	return (dest);
	}
