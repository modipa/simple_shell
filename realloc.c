#include "holberton.h"

/**
 * _realloc - Reallocate memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the old memory block.
 * @new_size: Size of the new memory block.
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
    void *new_ptr;

    /* If the new size is zero, free the old memory block and return NULL */
    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    /* If the pointer is NULL, allocate a new block using malloc */
    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        if (new_ptr == NULL)
            return NULL;
        return new_ptr;
    }

    /* If the new size is equal to the old size, return the original pointer */
    if (new_size == old_size)
        return ptr;

    /* Allocate a new block of the desired size */
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return NULL;

    /* Copy the contents of the old block to the new block */
    memcpy(new_ptr, ptr, old_size);

    /* Free the old memory block */
    free(ptr);

    return new_ptr;
}
