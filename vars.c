#include "holberton.h"

/**
 * _getenv - Get the value of an environment variable.
 * @name: The name of the environment variable.
 *
 * Return: The value of the environment variable, or NULL if not found.
 */
char *_getenv(const char *name)
{
    extern char **environ;
    char *value;
    size_t name_len;

    if (name == NULL || environ == NULL)
        return NULL;

    name_len = _strlen(name);

    for (int i = 0; environ[i] != NULL; i++)
    {
        if (_strncmp(environ[i], name, name_len) == 0 && environ[i][name_len] == '=')
        {
            value = environ[i] + name_len + 1;
            return value;
        }
    }

    return NULL;
}
