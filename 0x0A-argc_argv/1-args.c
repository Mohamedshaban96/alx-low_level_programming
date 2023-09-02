#include <stdio.h>
#include "main.h"

/**
* main - start of the program that print number of arguments passed to it
* @argc: number of augments
* @argv: pointer to an array of arguments
* Return: 0 on success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
{
	printf("%d\n", argc - 1);

}
return (0);
}
