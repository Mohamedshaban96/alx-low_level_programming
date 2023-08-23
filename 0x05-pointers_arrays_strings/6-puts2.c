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

	j = 0;
	i = 0;
	while (str[j++])
		i++;

	for (j = 0; j < i; j += 2)
		_putchar(str[j]);

	_putchar('\n');
}
