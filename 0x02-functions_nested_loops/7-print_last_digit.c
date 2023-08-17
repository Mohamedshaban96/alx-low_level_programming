#include "main.h"

/**
 * print_last_digit -prints number's last digit
 *
 * @n: the number we get it's last digit
 *
 *
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int y;

	y = n % 10;
	if (n < 0)
		y = y * -1;
	_putchar(y + '0');

	return (y);
}
