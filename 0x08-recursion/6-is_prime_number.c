#include "main.h"

/**
 * primcheck - check uf prime
 * @n: number to be checked
 *
 * @y: divisor
 * Return: Always 0.
 */
int primcheck(int n, int y)
{
	if (n == y)
		return (1);
	if (n % y == 0)
		return (0);
	return (primcheck(n, y + 1));

}

/**
 * is_prime_number - check if prime
 * @n: number to be check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int f = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (primcheck(n, f));
}
