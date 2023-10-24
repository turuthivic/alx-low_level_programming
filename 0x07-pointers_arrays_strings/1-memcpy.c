#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: The source memory area
 * @dest: The destination memory area
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the destination memory area
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

