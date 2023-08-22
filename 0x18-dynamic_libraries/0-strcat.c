#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * overwriting the terminating null byte
 * at the end of dest, and then adds a terminating null byte
 * @src: The source string
 * @dest: The destination string
 * Return: Apointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int sle = 0, i;

	while (dest[sle])
	{
		sle++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[sle] = src[i];
		sle++;
	}

	dest[sle] = '\0';
	return (dest);
}
