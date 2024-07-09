#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to modify.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1; /* Start by capitalizing the first letter */

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && capitalize_next)
		{
			str[i] = str[i] - 'a' + 'A'; /* Convert lowercase to uppercase */
			capitalize_next = 0; /* Prevent capitalizing subsequent letters */
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			 str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			 str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			 str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			 str[i] == '}')
		{
			capitalize_next = 1; /* Capitalize the next letter encountered */
		}
		else
		{
			capitalize_next = 0; /* Lowercase letters within words */
		}
		i++;
	}

	return (str);
}

