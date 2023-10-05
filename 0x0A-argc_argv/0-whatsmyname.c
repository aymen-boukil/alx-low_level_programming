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
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}

