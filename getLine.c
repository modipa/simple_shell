#include "holberton.h"

/**
 * getLine - Read a line of input from the user.
 *
 * Return: The input line as a string, or NULL on failure.
 */
char *getLine(void)
{
    char *line = NULL;
    size_t bufsize = 0;
    ssize_t characters_read;

    /* Use the getline function to read input from the user */
    characters_read = getline(&line, &bufsize, stdin);

    if (characters_read == -1)
    {
        /* getline returns -1 on failure or EOF */
        return NULL;
    }

    /* Remove the trailing newline character, if present */
    if (line[characters_read - 1] == '\n')
    {
        line[characters_read - 1] = '\0';
    }

    return line;
}
