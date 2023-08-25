#include <stdio.h>

int main(void)
{
        int n;            // Declare an integer variable n.
        int a[5];         // Declare an integer array a with 5 elements.
        int *p;           // Declare an integer pointer p.

        a[2] = 1024;      // Assign the value 1024 to the third element (index 2) of array a.
        p = &n;           // Set the pointer p to point to the address of integer variable n.

        /*
         * In this section, you are asked to write a single line of code that achieves a specific goal:
         * - You are not allowed to use the array 'a'.
         * - You are not allowed to modify the pointer 'p'.
         * - You can only write one statement.
         * - You are not allowed to code anything else except this line.
         */
        *(p + 5) = 98;    // Change the value at the memory location p + 5 to 98.

        /* The goal is to modify the code above so that the next line prints '98' when executed. */
        printf("a[2] = %d\n", a[2]);  // Print the value of the third element (index 2) of array 'a'.
        return (0);         // Return 0 to indicate successful execution of the program.
}
