#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: size of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int j, k;

	if (size < 1)
	{
		_putchar('\n');
	}
	j = 1;
	while (j <= size)
	{
		k = 1;
		while (k <= size)
		{
			if (k <= (size - j))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			k++;
		}
		_putchar('\n');
		j++;
	}
}
