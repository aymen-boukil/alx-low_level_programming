#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory to allocate
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, the malloc_checked function terminates
 *         the program with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	int *result;

	result = malloc((double) b);
	if (result != NULL)
	{
		return (result);
	}
	else
	{
		exit(98);
	}
}
