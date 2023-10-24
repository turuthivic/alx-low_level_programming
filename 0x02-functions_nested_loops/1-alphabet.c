#include "main.h"

/**
* main - entry point function
* print_alphabet - print letters of the alphabet
*
* Return: Returns 0
*/
int print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

int print_alphabet(void)
{
	int alph;
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}
