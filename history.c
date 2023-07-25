#include "holberton.h"

/**
 * history - Display the command history.
 * @history_list: The linked list containing the command history.
 */
void history(history_t *history_list)
{
    unsigned int line_number = 0;
    history_t *current = history_list;

    while (current != NULL)
    {
        printf("%u %s\n", line_number, current->command);
        line_number++;
        current = current->next;
    }
}
/**
 * struct history_s - singly linked list for the shell's history
 * @command: The command string
 * @next: Pointer to the next node in the list
 *
 * Description: Node for a singly linked list to store shell's history.
 */
typedef struct history_s
{
    char *command;
    struct history_s *next;
} history_t;
