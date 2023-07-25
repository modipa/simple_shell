#include "holberton.h"

/**
 * struct node_s - Doubly linked list node for integers
 * @n: Integer value stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 *
 * Description: Doubly linked list node structure for integers.
 */
typedef struct node_s
{
    int n;
    struct node_s *prev;
    struct node_s *next;
} node_t;

/**
 * add_node_end - Add a new node at the end of the list.
 * @head: Pointer to the pointer of the head of the list.
 * @n: The integer value to be added to the new node.
 *
 * Return: The address of the new node, or NULL on failure.
 */
node_t *add_node_end(node_t **head, int n)
{
    node_t *new_node, *temp;

    new_node = malloc(sizeof(node_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        new_node->prev = NULL;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = new_node;
        new_node->prev = temp;
    }

    return new_node;
}

/**
 * free_list - Free the entire list.
 * @head: Pointer to the head of the list.
 */
void free_list(node_t *head)
{
    node_t *current, *next;

    current = head;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
