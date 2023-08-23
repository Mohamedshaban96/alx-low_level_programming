#include "main.h"

/**
 * *_strcpy - copy string into another
 * @dest: the string copied to
 * @src: the main string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
{
		dest[i] = src[i];
		i++;
}
	return (dest);
	}
