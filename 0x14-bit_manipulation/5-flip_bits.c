#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip the number of element in the bit
 * to write the element in one bit
 * @n: print out the first element
 * @m: print out the second element
 *
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
