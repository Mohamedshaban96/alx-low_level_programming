#include "main.h"

/**
 * _isdigit - check if the input is digit or not
 *
 * @c: the didit to be checked
 * Return: Always 0 if false and 1 if true
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	else
	return (0);
}
