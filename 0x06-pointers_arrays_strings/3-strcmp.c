#include "main.h"

/**
* _strcmp - Compare tow strings.
* @s1: first string to compare.
* @s2: second string to compare
*
* Return: 0 if the strings are equal
*	  negative(-) if s1 < s2
*	  positive(+) if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
