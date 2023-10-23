#include <stdio.h>

/**
* main - entry point function
*
* Return: returns 0
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
