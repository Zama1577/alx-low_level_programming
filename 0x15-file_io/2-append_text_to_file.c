#include "main.h"

/**
 * append_text_to_file - create a function that appends a text at the end of a file
 * @filename: name of file is given
 * @text_content: NULL terminated string to be added at end of file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)

{
	FILE *fd;

	if (filename == NULL)
		return (-1);

	fd = fopen(filename, "a");
	if (fd == NULL)
		return (-1);

	if (text_content != NULL)
		fputs(text_content, fd);

	fclose(fd);
	return (1);
}
