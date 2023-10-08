#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate
 *
 * Return: Pointer to the allocated memory
 *         If malloc fails, exits with status 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(98);
    }

    return ptr;
}

