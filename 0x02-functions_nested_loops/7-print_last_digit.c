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

	if (n >= 0)
{
	y = n % 10;
	_putchar(y + 48);
}
	else
{
	y = (n * -1) % 10;
	_putchar(y + 48);
}
	return (0);
	}
