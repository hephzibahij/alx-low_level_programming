#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - insert all the element in the file
 * @filename: create the filename in the pointer
 * @text_content: write allthe content in the pointer name.
 * Return: when the function fails - -1.
 *         Otherwise is - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == 0)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
