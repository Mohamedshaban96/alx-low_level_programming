#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings followed by new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list argus;
	char *j;

	va_start(argus, n);
	if (n == 0)
	{
	printf("\n");
		return;
	}

	while (i < n)
	{
	j = va_arg(argus, char *);
	if (j == NULL)
		j = "(nil)";
	if (separator)
	{
		if (i == (n - 1))
			printf("%s", j);
		else
			printf("%s%s", j, separator);
	}
	else
	{
		printf("%s", j);
	}
		i++;
	}
	printf("\n");
	va_end(argus);
}
