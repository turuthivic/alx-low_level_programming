#include "main.h"

/**
* print_alphabet - print letters of the alphabet in lowercase
*
* Return: Returns 0
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
