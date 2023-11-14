#include "main.h"

/**
 * _isupper - detemine if the char is upper case char or not
 *
 * @c: the character to be determind
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	return (1);

	else
		return (0);
}
