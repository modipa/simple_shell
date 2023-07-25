#include "holberton.h"

/**
 * builtin_env - Display the current environment variables.
 * @args: The list of arguments passed to the command.
 *
 * Return: Always returns 1 to continue executing the shell loop.
 */
int builtin_env(char **args)
{
    char **env = environ;

    while (*env != NULL)
    {
        printf("%s\n", *env);
        env++;
    }

    return 1;
}
