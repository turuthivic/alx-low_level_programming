#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest - first string
 * @src - second string
 *
 * Return: concatenated string.
 */
	char *_strcat(char *dest, char *src)
	{
		char *original_dest = dest;

		/* Move to the end of the dest string */
		while (*dest != '\0')
			dest++;
		
		/* Copy the src string to the end of dest */	
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}

		/* Add a terminating null byte */
		*dest = '\0';

		/* Return to the beginning of the original dest */
		return original_dest;
	}
