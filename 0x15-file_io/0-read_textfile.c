#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- write and read all the textfile element
 * @filename: input the filename
 * @letters: create the number of lines in the letter
 * Return: w- return the actual value of the output
 *        0 when is NULL and it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
