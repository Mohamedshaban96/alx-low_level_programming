#include "main.h"

/**
 * puts2 - write every other character
 *
 * @str: the string
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}

	for (j = 0; j < i; j += 2)
		_putchar(str[j]);

	_putchar('\n');
}
