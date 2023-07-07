#include "main.h"
#include <stdio.h>

/**
 * flip_bits - insert the bit in functions
 * from one variable to another
 * @n: index for n
 * @m: create index m
 *
 * Return: 0 when it is success
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
