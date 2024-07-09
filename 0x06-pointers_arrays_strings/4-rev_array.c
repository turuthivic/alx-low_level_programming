#include "main.h"

/**
* reverse_array - reverse the array provided
*
* @a: array.
* @n: number of values in the array.
* Return: 0
*/

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		/* swap the values upto the center index */
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
