#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bits = 0;
	int x = 0;

	bits = sizeof(unsigned long int) * 8;

	while (bits > 0)
	{
		if (n & 1l << (bits - 1))
		{
			_putchar('1');
			x++;
		}
		else if (x > 0)
			_putchar('0');

		bits--;
	}
	if (x == 0)
		_putchar('0');
}
