#include "main.h"

/**
 * _pow_recursion - return the result of a number power another number
 * @x: the base number
 * @y: the number of power
 *
 * Return: the power of the number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 1 || y == 0)
		return (1);

	if (x == 0)
		return (0);

	return (x * _pow_recursion(x, y - 1));
}
