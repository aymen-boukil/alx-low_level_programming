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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

