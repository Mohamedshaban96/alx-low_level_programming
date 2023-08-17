#include "main.h"

/**
 * jack_bauer - print songs minutes
 *
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int a = 0, b, c, d;

	while (a < 3)
{
	b = 0;
	while (b < 4)
	{
		c = 0;
	while (c < 6)
	{
		d = 0;
		while (d < 10)
		{
			_putchar(a + 48);
			_putchar(b + 48);
			_putchar(':');
			_putchar(c + 48);
			_putchar(d + 48);
			_putchar('\n');
			d++;
		}
		c++;
	}
	b++;
	}
	a++;
}
}
