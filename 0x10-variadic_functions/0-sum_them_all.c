#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum the vaiables that pased to it as parameters
 * @n: number of paramter passed to it
 * Return: the sum of the parameters or 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int j = 0;
	va_list argus;

	if (n == 0)
		return (0);

	va_start(argus, n);

	while (i < n)
	{
		j = va_arg(argus, int) + j;
		i++;
	}
	va_end(argus);
	return (j);
}
