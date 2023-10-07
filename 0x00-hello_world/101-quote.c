#include <stdio.h>
/**
*main - entry point of the program
*
*Return: 1 is the return value
*/
int main(void)
{
	char sent[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", sent);
	return (1);
}
