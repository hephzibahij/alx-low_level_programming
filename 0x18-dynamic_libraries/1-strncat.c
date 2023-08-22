#include "main.h"

/**
 * _strncat - appends a string
 * @dest: the string to be appended
 * @src: the string to be appended to dest
 * @n: The number of bytes
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_end = *src;
		dest_end++;
		src++;
		n--;
	}
	*dest_end = '\0';
	return (dest);
}
