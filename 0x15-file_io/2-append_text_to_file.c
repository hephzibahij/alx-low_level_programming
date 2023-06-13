#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - write the element in the append_text
 * @filename: rename the file in the pointer
 * @text_content: create a file in the text_content
 *
 * Return: when the file fails and is NULL - -1.
 *         If the file does not write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != 0)
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
