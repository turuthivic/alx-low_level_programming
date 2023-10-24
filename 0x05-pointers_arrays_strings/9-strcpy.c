#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination buffer
 * @src: source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}

