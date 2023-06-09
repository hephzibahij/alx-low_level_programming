#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clear all the element in the clear_bit
 * @n: find the index of the pointer
 * @index: create an index form in the bit binary
 *
 * Return: when 1 is success amd it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
