#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string
 * @src: source value
 * @dest: Destination value
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
