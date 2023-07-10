#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - write the append text file
 * @filename: A filename to be written
 * @text_content: A pointer to be in the text content
 *
 * Return: If the function filename is NULL or -1.
 *         If the file does not exist is -1.
 *         Or is - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
