#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * read_textfile- insert the text file to function
 * @filename: file name to be inserted
 * @letters: letter to be written
 * Return: write the actual value
 *        0 when function is NULL.
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
