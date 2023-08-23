#include "main.h"

/**
 * puts_half - print half of the string.
 *
 * @str: the string itself
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, j, k;

	k = 0;
	i = 0;
	j = 0;
	while (str[i++] != 0)
		j++;

	if ((j % 2) == 0)
		k = j / 2;
	else
		k = (j + 1) / 2;
	i = k;
	while (i < j)
	{
		_putchar(str[i]);
			i++;
	}
	_putchar('\n');
}
