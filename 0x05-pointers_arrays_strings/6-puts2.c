#include "main.h"

/**
 * puts2 - prints every other character of a string starting with the first one
 * @str: input string
 */
void puts2(char *str)
{
	int length = 0;
	int i = 0;

	while (*str != '\0')
	{
		str++;
		length++;
	}
	str--;

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		str--;
	}

	_putchar('\n');
}

