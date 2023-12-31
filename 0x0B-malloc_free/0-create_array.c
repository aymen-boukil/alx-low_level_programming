#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes with a specific
 *                char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the allocated memory for the array, or NULL if size
 *         is 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

