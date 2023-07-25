#include "holberton.h"

/**
 * add_node_end - Add a new node at the end of the list.
 * @head: Pointer to the pointer of the head of the list.
 * @str: The string to be added as the content of the new node.
 *
 * Return: The address of the new node, or NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;

    if (str == NULL)
        return (NULL);

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
    }

    return (new_node);
}

/**
 * free_list - Free the entire list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
    list_t *current, *next;

    current = head;
    while (current != NULL)
    {
        next = current->next;
        free(current->str);
        free(current);
        current = next;
    }
}
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    struct list_s *next;
} list_t;

