#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: The character to check
 *
 * Return: 1 if uppercase
 * Otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
