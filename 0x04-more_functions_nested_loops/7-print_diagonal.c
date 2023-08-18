#include "main.h"

/**
 * print_diagonal - PRINT DIAGONAL LINE
 *
 * @n: number of lines to be printed
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int y, t;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		y = 0;
		while (y < n)
		{
			t = 0;
	while (t < y)
{
	_putchar(' ');
	t++;
}
	_putchar('\\');
	_putchar('\n');
	y++;
}
}
}
