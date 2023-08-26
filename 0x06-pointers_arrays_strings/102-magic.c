#include <stdio.h>

/*
 * Entry point of the program.
 * Initializes variables, manipulates pointers, and demonstrates a specific
 * behavior. This code aims to achieve a desired output by adhering to certain
 * constraints.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
	/*
	 * main - Entry point of the program.
	 *
	 * This function initializes variables, manipulates pointers, and
	 * demonstrates a specific behavior. It aims to achieve a desired output by
	 * adhering to certain constraints.
	 *
	 * Return: Always returns 0 to indicate successful execution.
	 */
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * Write your line of code here...
	 * Remember:
	 * - You are not allowed to use 'a'
	 * - You are not allowed to modify 'p'
	 * - Only one statement is allowed
	 * - You are not allowed to code anything else than this line of code
	 */
	p[5] = 98; /* Add this line */
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
