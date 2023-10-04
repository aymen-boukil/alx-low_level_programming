#include <stdlib.h>

/**
 * _strdup - Duplicates a string using malloc.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string,
 * or NULL if memory allocation fails or if str is NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	if (str == NULL)
		return NULL;

	/* Calculate the length of the string */
	while (str[length])
		length++;

	/* Allocate memory for the duplicate string */
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return NULL;

	/* Copy the original string to the duplicate */
	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	/* Null-terminate the duplicate string */
	duplicate[length] = '\0';

	return duplicate;
}

