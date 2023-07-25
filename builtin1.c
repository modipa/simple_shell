#include "holberton.h"

/**
 * builtin_help - Display help information about the shell.
 * @args: The list of arguments passed to the command.
 *
 * Return: Always returns 1 to continue executing the shell loop.
 */
int builtin_help(char **args)
{
    /* Display help information for the shell */
    printf("Simple Shell Help:\n");
    printf(" - This is a simple shell project.\n");
    printf(" - It supports built-in commands like cd, exit, help, etc.\n");
    printf(" - For external commands, use the PATH to find programs.\n");
    printf(" - Use man command-name to get more information about a command.\n");
    printf(" - For additional help, refer to the project documentation.\n");

    return 1;
}
