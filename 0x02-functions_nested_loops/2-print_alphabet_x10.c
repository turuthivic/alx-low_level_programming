#include "main.h"

/**
* print_alphabet_x10 - print the alphabet 10 times
* in lowercase
* Return - return 0
*/

void print_alphabet_x10(void)
{
	char cha;
	int i;

	i = 0;

	while (i < 10)
	{
		cha = 'a';
		while (cha <= 'z')
		{
			_putchar(cha);
			cha++;
		}
		_putchar('\n');
		i++;
	}
}
