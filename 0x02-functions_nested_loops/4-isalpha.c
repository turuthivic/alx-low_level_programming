#include "main.h"

/**
 * _isalpha - checks for  a alphabetic character
 * @c: this is the argument character to be checked
 * Return: 1 if c is a letter, if not return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
