#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print in reverse
 */
void rev_string(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

