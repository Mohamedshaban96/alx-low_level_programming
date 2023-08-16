#include "main.h"

/**
 * _abs - get the absolute value
 *
 * @n: number that we get its absolote value
 *
 * Return: Always 0.
 */

int _abs(int n)
{


	if (n >= 0)
{
	return (n);
}
	else
{
	n = n * -1;
	return (n);
}
}
