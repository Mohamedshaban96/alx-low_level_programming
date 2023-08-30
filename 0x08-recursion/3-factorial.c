#include "main.h"

/**
 * factorial - get the factorial of a number
 * @n: the number we will get it's factorial
 *
 * Return: the factorial of the number or -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);

	else
		return (n * factorial(n - 1));
}
