#include "main.h"

/**
 * *_strncpy - copy a string
 * @dest: the string that will contain the copy
 * @src: the string we will copy
 * @n: number of bytes that we want to copy from the string
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
