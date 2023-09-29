#include "main.h"

/**
 * get_bit - prints the binary representation of a number.
 * @n: the number
 * @index: position of the bit
 * Return: 1 or 0;
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
