#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array to be printed
 * @n: number of elements to print
 *
 * Description: This function prints the first n elements of an array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

