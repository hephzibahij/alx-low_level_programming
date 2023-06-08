#include <stdio.h>
#include "main.h"

/**
 * get_bit - print all the element in the value of the decimal
 * @n: number of element to be seen
 * @index: print the index of the decimal
 *
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;
	return (bit_val);
}
