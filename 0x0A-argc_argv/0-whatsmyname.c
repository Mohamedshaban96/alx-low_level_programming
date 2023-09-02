#include <stdio.h>
#include "main.h"

/**
* main - start of the program that print its name
* @argc: the number or arguments
* @argv: pointer to an array of arguments
* Return: 0 on success
*
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
