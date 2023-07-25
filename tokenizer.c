#include "holberton.h"

/**
 * tokenize - Tokenize a line of input into an array of arguments.
 * @line: The input line to tokenize.
 *
 * Return: An array of pointers to the arguments, or NULL on failure.
 */
char **tokenize(char *line)
{
    char **tokens;
    char *token;
    int bufsize = TOKEN_BUFSIZE;
    int position = 0;

    tokens = malloc(bufsize * sizeof(char *));
    if (tokens == NULL)
    {
        fprintf(stderr, "Memory allocation error\n");
        return NULL;
    }

    token = strtok(line, TOKEN_DELIMITERS);
    while (token != NULL)
    {
        tokens[position] = token;
        position++;

        if (position >= bufsize)
        {
            bufsize += TOKEN_BUFSIZE;
            tokens = realloc(tokens, bufsize * sizeof(char *));
            if (tokens == NULL)
            {
                fprintf(stderr, "Memory allocation error\n");
                return NULL;
            }
        }

        token = strtok(NULL, TOKEN_DELIMITERS);
    }
    tokens[position] = NULL;

    return tokens;
}
