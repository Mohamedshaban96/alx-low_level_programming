#include "main.h"

/**
 * swap_int - swap two numbers places
 *
 * @a: first number we want to swap
 * @b: the second number we want to swap
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int storing;

	storing = *a;
	*a = *b;
	*b = storing;
}
