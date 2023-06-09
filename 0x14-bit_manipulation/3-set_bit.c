#include <stdio.h>
#include "main.h"

/**
 * set_bit - set all the binary numbers in bit
 * @n: print out the pointer in the set bit
 * @index: when creating a pointer, create an index
 *
 * Return: 1 is success only if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
