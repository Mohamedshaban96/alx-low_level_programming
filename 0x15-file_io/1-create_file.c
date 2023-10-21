#include "main.h"

/**
 * create_file - creat file
 * @filename: the file name
 * @text_content: a NULL terminated string to write to the file
 * Return: -1 if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{

	int filp;
	ssize_t len = 0;


	if (filename == NULL)
		return (-1);

	filp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filp == -1)
		return (-1);

	if (text_content != NULL)
		len = write(filp, text_content, strlen(text_content));
	close(filp);
	if (len == -1)
		return (-1);
	return (1);
}
