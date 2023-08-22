#include <stdio.h> // Include necessary header for printf function

/**
 * print_array - a function that prints n elements of an array
 * @a: pointer to the array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
    int i;
    
    for (i = 0; i < n - 1; i++) // Change 1 to i and fix the comparison
    {
        printf("%d, ", a[i]); // Use %d instead of %d, and fix quotes
    }
    
    if (n > 0) // Check if there's at least one element
    {
        printf("%d", a[n - 1]);
    }
    
    printf("\n"); // Add newline character
}
