#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = d = n = 0;
	len = f = digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - Adds two positive numbers.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 (Success) or 1 (Error).
 */
int main(int argc, char *argv[])
{
	int sum = 0, num, i;

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
			j++;
		}
	}

	for (i = 1; i < argc; i++)
	{
		num = _atoi(argv[i]);
		if (num >= 0)
			sum += num;
	}

	printf("%d\n", sum);
	return (0);
}

