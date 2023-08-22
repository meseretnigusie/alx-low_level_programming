include "main.h"

/**
 * print_array - Prints n elements of an array
 * @a: Pointer to the array
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	if (n > 0)
	{
		printf("%d", a[n - 1]);
	}

	printf("\n");
}
