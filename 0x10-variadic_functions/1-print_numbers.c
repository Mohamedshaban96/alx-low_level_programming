#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list argus;
	int j = 0;

	va_start(argus, n);
	if (n == 0)
	{
	printf("\n");
		return;
	}

	while (i < n)
	{
	j = va_arg(argus, int);
	if (separator)
	{
		if (i == (n - 1))
			printf("%d", j);
		else
			printf("%d%s", j, separator);
	}
	else
	{
		printf("%d", j);
	}
		i++;
	}
	printf("\n");
	va_end(argus);
}
