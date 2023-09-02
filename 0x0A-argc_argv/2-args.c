#include <stdio.h>
#include "main.h"

/**
* main - tart of a function that print each argument passed to it
* @argc: the number or arguments
* @argv: pointer to an array of arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

