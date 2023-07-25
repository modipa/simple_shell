#include "holberton.h"

/**
 * _strlen - Calculate the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string (excluding the null terminator).
 */
size_t _strlen(const char *str)
{
    size_t len = 0;

    while (str[len] != '\0')
        len++;

    return len;
}

/**
 * _strcpy - Copy a string from source to destination.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strcpy(char *dest, const char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}

/**
 * _strcmp - Compare two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 0 if the strings are equal, negative if s1 < s2, positive if s1 > s2.
 */
int _strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

/**
 * _strcat - Concatenate two strings.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strcat(char *dest, const char *src)
{
    int dest_len = _strlen(dest);
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    dest[dest_len + i] = '\0';

    return dest;
}
