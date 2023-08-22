#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 * @dest: Copy to
 * @src: Copy from
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0; // Initialize i to 0

    while (src[i] != '\0') // Use correct loop condition
    {
        dest[i] = src[i];
        i++;
    }
    
    dest[i] = '\0'; // Null-terminate the destination string
    
    return dest;
}
