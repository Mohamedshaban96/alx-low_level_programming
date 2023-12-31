#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the string containg the binary number
 * Return: unsigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int cant = 0;
	int x = 0;
	int y = 1;

	if (b == NULL)
		return (cant);

	x = (int)strlen(b) - 1;

	while (x >= 0)
	{
		if (b[x] != '0' && b[x] != '1')
			return (cant);

		if (b[x] == '1')
			count = count + y;

		y = y * 2;
		x--;
	}
	return (count);
}
