#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 *
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: If the substring is found, a pointer to the beginning of the
 * located substring. If the substring is not found, NULL is returned.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *I = haystack;
		char *P = needle;

		while (*I == *P && *P != '\0')
		{
			I++;
			P++;
		}
		if (*P == '\0')
			return (haystack);
	}
	return (0);
}

