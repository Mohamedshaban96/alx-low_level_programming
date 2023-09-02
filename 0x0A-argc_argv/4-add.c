#include <stdio.h>
#include <stdlib.h>

/**
 * main - progran that Prints the addition of positive numbers
 * @argc: the number or arguments
 * @argv: pointer to an array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i ,j ,k;

	i = 0;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		k += atoi(argv[i]);
		i++;
	}
	printf("%d\n", k);
	return (0);
}
