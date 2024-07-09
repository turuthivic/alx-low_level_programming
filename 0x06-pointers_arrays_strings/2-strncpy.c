#include "main.h"

/**
 * _strncat - copies up to n characters from src to dest.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	/* man strncpy */
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
