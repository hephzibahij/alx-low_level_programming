#include "main.h"
#include <stdio.h>

/**
 * get_endianness - insert the function in the file name
 * Return: 0 for big while 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
