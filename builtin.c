#include "holberton.h"

/**
 * builtin_cd - Change the current working directory.
 * @args: The list of arguments passed to the command.
 *
 * Return: Always returns 1 to continue executing the shell loop.
 */
int builtin_cd(char **args)
{
    if (args[1] == NULL)
    {
        /* No argument provided, go to the home directory */
        if (chdir(getenv("HOME")) == -1)
            perror("cd");
    }
    else
    {
        /* Change to the specified directory */
        if (chdir(args[1]) == -1)
            perror("cd");
    }

    return 1;
}
