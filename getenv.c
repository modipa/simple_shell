#include "holberton.h"

/**
 * _getenv - Get the value of an environment variable.
 * @name: The name of the environment variable.
 *
 * Return: The value of the environment variable as a string, or NULL if not found.
 */
char *_getenv(const char *name)
{
    extern char **environ; // Access to the environment variables array
    char *variable_name;
    size_t name_len;

    if (name == NULL || *name == '\0' || environ == NULL)
        return NULL;

    name_len = strlen(name);

    for (int i = 0; environ[i] != NULL; i++)
    {
        variable_name = environ[i];
        if (strncmp(name, variable_name, name_len) == 0 && variable_name[name_len] == '=')
        {
            return (variable_name + name_len + 1); // Return the value part of the environment variable
        }
    }

    return NULL; // Variable not found
}
