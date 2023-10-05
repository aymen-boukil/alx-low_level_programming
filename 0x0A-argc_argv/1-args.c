#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument vector, an array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Unused parameter */

	printf("%d\n", argc - 1);
	return (0);
}

