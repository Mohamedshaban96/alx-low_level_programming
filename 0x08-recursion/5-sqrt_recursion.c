#include "main.h"

/**
 * root_finder - check if a number has a square root starting from inputed num
 * @i: the number to check if it has a square root
 * @test_n: a counter used to test if the number has a square root or not
 *
 * Return: (-1) if it has no square root or (test_n) if it has
 */

int root_finder(int i, int test_n)
{
	if ((test_n * test_n) > i)
		return (-1);

	else if ((test_n * test_n) == i)
		return (test_n);

	else
		return (root_finder(i, test_n + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: the number we want to find its sqrt
 * Return: the square root or (-1) if the number don't have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	else
	return (root_finder(n, 0));
}
