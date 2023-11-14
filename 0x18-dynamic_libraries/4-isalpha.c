#include "main.h"

/**
 * _isalpha - check the char if alph or not
 *
 * @c: the char to be checked
 *
 * Return: Always 0.
 */

int _isalpha(int c)

{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);



}
