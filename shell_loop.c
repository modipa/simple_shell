#include "holberton.h"

/**
 * shell_loop - Run the main loop of the shell.
 */
void shell_loop(void)
{
    char *line;
    char **args;
    int status;

    do {
        /* Display the shell prompt */
        print_prompt();

        /* Read a line of input from the user */
        line = getLine();

        /* Tokenize the input line into arguments */
        args = split_line(line);

        /* Execute the command */
        status = execute_command(args);

        /* Free allocated memory */
        free(line);
        free_args(args);
    } while (status);
}
