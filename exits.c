#include "holberton.h"

/**
 * builtin_exit - Exit the shell.
 * @args: The list of arguments passed to the command.
 *
 * Return: Always returns 0 to exit the shell.
 */
int builtin_exit(char **args)
{
    int exit_status = 0;

    if (args[1] != NULL)
    {
        /* Convert the first argument to an integer for the exit status */
        exit_status = atoi(args[1]);
    }

    /* Perform any cleanup or resource release if needed */
    // ...

    /* Exit the shell with the provided exit status */
    exit(exit_status);
}
