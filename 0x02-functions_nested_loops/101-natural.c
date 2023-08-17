#include "main.h"

/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned int a, n;

	n = 0;
	while (n < 124)
	{
		if ((n % 5 == 0) || (n % 3 == 0))
		a = a + n;
	n++;
	}
	printf("%d\n", a);
	return (0);
}
