#include <stdio.h>

/**
* main - entry point function
*
* Return: return 0
*/

int main(void)
{
	char hex;

	for (hex = '0'; hex <= 'f'; hex++)
	{
		if ((hex >= '0' && hex <= '9') || (hex >= 'a' && hex <= 'f'))
		{
			putchar(hex);
		}
	}
	putchar('\n');
	return (0);
}
