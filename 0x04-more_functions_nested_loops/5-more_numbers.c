#include "main.h"

/**
 * more_numbers - print numbers ftom 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i = 0, y;

	while (i < 10)
	{
		y = 0;
		while (y < 14)
		{
			if (y > 9)
			{
				y = y / 10;
				_putchar(y + 48);
			}
		y = y % 10;
		_putchar(y + 48);

			y++;
		}
		_putchar('\n');
		i++;
}
}
