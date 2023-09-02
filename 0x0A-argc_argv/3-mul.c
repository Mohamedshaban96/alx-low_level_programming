#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - start of the program that print the multiplay of 2 numbers
* @argc: the number or arguments
* @argv: pointer to an array of arguments
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (-1);
	}
	return (0);
}
