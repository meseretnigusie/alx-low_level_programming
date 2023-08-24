#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    int index = 0;

    while (str[index])
    {
        while (!(str[index] >= 'a' && str[index] <= 'z'))
        {
            index++;
        }

        if (index == 0 ||
            str[index - 1] == ' ' ||
            str[index - 1] == '\t' ||
            str[index - 1] == '\n' ||
            str[index - 1] == ',' ||
            str[index - 1] == ';' ||
            str[index - 1] == '.' ||
            str[index - 1] == '!' ||
            str[index - 1] == '?' ||
            str[index - 1] == '"' ||
            str[index - 1] == '(' ||
            str[index - 1] == ')' ||
            str[index - 1] == '{' ||
            str[index - 1] == '}')
        {
            str[index] -= 32; // Convert lowercase to uppercase.
        }

        index++;
    }

    return str;
}
