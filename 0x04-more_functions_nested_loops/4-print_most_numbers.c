#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 except 4 and 2
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 4 && i != 2)
		{
			_putchar(i + 48);
		}
		i++;
	}
	_putchar('\n');
}

