#include "main.h"

/**
 * print_square - print a square
 *
 * @size: the size of square
 * Return: Always 0.
 */

void print_square(int size)
{
	int y, t;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		y = 0;
		while (y < size)
		{
			t = 0;
		while (t < size)
		{
			_putchar('#');
			t++;
		}
		_putchar('\n');
	y++;
		}
	}
}
