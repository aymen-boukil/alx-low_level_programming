#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string,
 *         NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int length1 = 0, length2 = 0, i;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	while (s1[length1])
		length1++;

	/* Calculate the length of s2 */
	while (s2[length2])
		length2++;

	/* Allocate memory for the concatenated string (+1 for null-terminator) */
	concatenated = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	/* Copy s1 to the concatenated string */
	for (i = 0; i < length1; i++)
		concatenated[i] = s1[i];

	/* Copy s2 to the concatenated string */
	for (i = 0; i < length2; i++)
		concatenated[length1 + i] = s2[i];

	/* Null-terminate the concatenated string */
	concatenated[length1 + length2] = '\0';

	return (concatenated);
}

