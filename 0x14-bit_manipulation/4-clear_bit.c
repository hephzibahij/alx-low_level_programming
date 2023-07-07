#include "main.h"

/**
 * clear_bit - clear the bit in the element
 * @n: take n to the pointer
 * @index: index to edit in the file
 *
 * Return: 1 for success while -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
