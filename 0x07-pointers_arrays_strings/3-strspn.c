#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: The string to search.
 * @accept: The string of characters to match.
 *
 * Return: The number of bytes in the initial segment of `s` that
 * consists only of characters found in `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				i++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}

