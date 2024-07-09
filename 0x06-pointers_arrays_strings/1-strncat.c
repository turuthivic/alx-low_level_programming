#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;
	/* Move to the end of *dest */
	while (*dest != '\0')
		dest++;

	/* Copy up to n bytes of src to dest*/
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* Add a terminating value */
	*dest = '\0';

	return (original_dest);
}
