#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i = 0; /* Index for iterating through the string */
	int num = 0; /* Final integer result */
	int length = 0; /* Length of the string */
	int is_negative = 0; /* Flag to check if the number is negative */

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Iterate through the string and convert it to an integer */
	while (i < length)
	{
		if (s[i] == '-')
			is_negative = 1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}

	/* If the number was negative, make it negative in the result */
	if (is_negative)
		num = -num;

	return num;
}

