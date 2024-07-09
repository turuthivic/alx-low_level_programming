#include "main.h"

/**
* string_toupper - Converts all lowercase letters in a string to uppercase.
* @str: The string to modify.
*
* Return: Pointer to the modified string.
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert lowercase to uppercase */
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}

	return (str);
}

