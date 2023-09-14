#include "function_pointers.h"

/**
 * print_name - check if array can be printed and send it to function to print
 * @name: the name to be printed
 * @f: a pointer to function that print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
