#include "main.h"

/**
 * char *_memcpy - copy memory ara to anothr mmory area
 * @src: the pointer to the area we will copy
 * @dest: pointer to area we will copy to
 * @n: number of bytes that will b copid
 *
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
