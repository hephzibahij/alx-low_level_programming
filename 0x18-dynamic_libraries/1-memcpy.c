#include "main.h"

/**
 * _memcpy - copies memory area.
 * @src: input
 * @dest: input
 * @n: input
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
