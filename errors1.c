#include "holberton.h"

/**
 * print_error - Print an error message to stderr.
 * @msg: The error message to print.
 */
void print_error(char *msg)
{
    fprintf(stderr, "Error: %s\n", msg);
}

/**
 * exit_shell - Exit the shell with a given exit code.
 * @exit_code: The exit code for the shell.
 */
void exit_shell(int exit_code)
{
    /* Perform any cleanup or resource release if needed */
    // ...

    /* Exit the shell with the provided exit code */
    exit(exit_code);
}
