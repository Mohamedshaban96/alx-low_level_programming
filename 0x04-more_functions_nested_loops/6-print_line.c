#include "main.h"

/**
 * print_line - print a line
 *
 * @n:the number of times the character _ should be printed
 * Return: Always 0.
 */
void print_line(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		y = 0;
		while (y < n)
		{
			_putchar('_');
		y++;
		}
		_putchar('\n');
	}
}
