#include "main.h"

/**
 * *_strncat - a function that concatenate two strings
 * @dest: the initial string
 * @src: the string that follow the other string
 * @n: number of bytes taken fron the second string
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] < src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
