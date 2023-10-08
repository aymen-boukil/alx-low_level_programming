#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @size: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the malloc_checked function
 *         should cause normal process termination with a status value of 98.
 */
void *malloc_checked(unsigned int size)  /* changed b to size */
{
	void *pointer;

	pointer = malloc(size);  /* changed b to size */
	if (pointer == NULL)
		exit(98);

	return (pointer);
}

