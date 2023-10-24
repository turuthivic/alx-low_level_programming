#include "main.h"

/**
 * print_sign - outputs the sign of a number
 * @n: the argument integer to check
 * Return: 1 and prints + if n is greater than zero
 * returns n and prints 0 if n is zero
 * returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');	/* Print '+' for positive numbers */
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');	/* Print '0' for zero */
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');	/* Print '-' for negative numbers */
		return (-1);
	}

	return (0);	/* Default return value if none of the conditions match */
}
