#include <stdio.h>

/**
 * main -  Entry point
 * Description: print number of base16 in lowercase
 * Return: return 0 and exit
 */

int main(void)
{
	int i;
	char g[16] = "0123456789abcdef";
	char f;

	i = 0;

	while (i < 16)
{
	f = g[i];

	putchar(f);

	i = i + 1;
}

	putchar('\n');
	return (0);
}
