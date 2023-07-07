#include "main.h"
#include <stdio.h>

/**
 * get_bit - insert the bit in the element
 * @n: number to n
 * @index: index of n
 *
 * Return: 0 is success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
