#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function demonstrates an infinite loop and its avoidance.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    printf("infinite loop incoming :(\n");
    i = 0;
    /*
     * while (i < 10)
     * {
     *     putchar(i);
     *     i++;
     * }
     */
    printf("infinite loop avoided \\o/\n");

    return (0);
}

