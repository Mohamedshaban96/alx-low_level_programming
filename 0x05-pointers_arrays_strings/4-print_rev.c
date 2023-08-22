#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: the string
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0, j;

	while (*s != '\0')
	{
		s++;
		i++;

	}
	s--;
	j = i;

	while (j >= 0)
	{
		_putchar(*s);
		s--;
		j--;
	}
	_putchar('\n');
}


