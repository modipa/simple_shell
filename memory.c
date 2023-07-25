#include "holberton.h"

/**
 * _strdup - Duplicate a string in memory.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(const char *str)
{
    char *dup_str;
    size_t len, i;

    if (str == NULL)
        return NULL;

    len = strlen(str);

    dup_str = malloc((len + 1) * sizeof(char));
    if (dup_str == NULL)
        return NULL;

    for (i = 0; i < len; i++)
        dup_str[i] = str[i];

    dup_str[len] = '\0';

    return dup_str;
}

/**
 * free_args - Free an array of strings.
 * @args: The array of strings to free.
 */
void free_args(char **args)
{
    int i;

    if (args == NULL)
        return;

    for (i = 0; args[i] != NULL; i++)
        free(args[i]);

    free(args);
}
