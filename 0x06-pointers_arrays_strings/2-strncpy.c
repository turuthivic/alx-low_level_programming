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

	/* Pad with null bytes if src is less than n chars long */
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest);
}
