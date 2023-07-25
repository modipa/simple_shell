#include "holberton.h"

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(const char *str)
{
    int count = 0;
    int is_word = 0;

    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            is_word = 0;
        }
        else if (!is_word)
        {
            is_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

/**
 * reverse_string - Reverse a string in place.
 * @str: The string to reverse.
 */
void reverse_string(char *str)
{
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
