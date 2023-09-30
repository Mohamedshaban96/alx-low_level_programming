#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xr = m ^ n;
	unsigned int counter = 0;

	while (xr > 0)
	{
		if (xr & 1)
			counter++;

		xr = xr >> 1;
	}
	return (counter);
}

