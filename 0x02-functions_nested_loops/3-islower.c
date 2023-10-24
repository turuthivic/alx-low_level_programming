
#include "main.h"

/**
 * _islower - check char is lowercase
 * @c: is the argument to be checked
 * Return: 1 if char is lowercase, if not 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
