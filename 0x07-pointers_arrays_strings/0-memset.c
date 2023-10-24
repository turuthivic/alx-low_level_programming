#include "main.h"

/**
 * _memset - sets the first n bytes of the memory area pointed to by s to b
 * @s: A pointer to the memory area
 * @b: The byte value to set
 * @n: The number of bytes to set
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

