#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number to be changed
 * @index: position of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
