#include "main.h"

/**
 * print_alphabet_x10 - print the alph ten times
 *
 * Return: Always 0 Success
 */

void print_alphabet_x10(void)
{
	int p = 0, y = 97;

	while (p < 10)
	{
		while (y < 123)
		{
			_putchar(y);
		y++;
		}
	}
	_putchar('\n');

		p++;
}
