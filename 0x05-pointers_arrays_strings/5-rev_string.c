#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string to be reversed
 *
 * Description: This function reverses the characters in a string.
 * Return: void
 */
void rev_string(char *s)
{
	char rev;
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;

	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
