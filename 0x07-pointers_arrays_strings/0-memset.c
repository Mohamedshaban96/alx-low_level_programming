#include "main.h"

/**
 * char *_memset - function fill a block of meomory with a conistant value
 * @b: the value that witll be stored in the block of memory
 * @n: number of bytes
 * @s: pointer to an area in the memory
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
