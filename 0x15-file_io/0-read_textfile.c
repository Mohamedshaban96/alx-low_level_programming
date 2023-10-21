#include "main.h"

/**
 * read_textfile - reads a text file and print it
 * @filename: file name
 * @letters: number of letters is should read
 * Return: the amount of letters it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filp;
	char *buff;
	ssize_t len, lenwr;

	if (filename == NULL)
		return (0);

	filp = open(filename, O_RDONLY);
	if (filp == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(filp);
		return (0);
	}

	len = read(filp, buff, letters);

	close(filp);
	if (len == -1)
	{
		free(buff);
		return (0);
	}

	lenwr = write(STDOUT_FILENO, buff, len);
	free(buff);

	if (len != lenwr)
		return (0);
	return (lenwr);
}
