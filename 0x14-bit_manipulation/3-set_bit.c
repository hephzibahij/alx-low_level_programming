#include "main.h"
#include <stdio.h>

/**
 * set_bit - insert the bit in the element
 * @n: create the number n
 * @index: index the number n
 *
 * Return: 1 for success while -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
