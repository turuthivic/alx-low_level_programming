#include "main.h"

/**
 * _abs - Calculate the absolute value of an integer.
 * @n: The integer to find the absolute value of.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);  /* Return the integer if non-negative. */
	}
	return (-n);   /* Return the negation if negative. */
}
