#include <stdio.h>
#include "main.h"

/**
 * get_endianness - get all the element in the bit
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
