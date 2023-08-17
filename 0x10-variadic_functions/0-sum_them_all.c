#include "variadic_functions.h"

/**
 * sum_them_all - Adds all the numbers.
 * @n: The number of parameters passed.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    int sum = 0;
    unsigned int i;
    va_list args;

    if (n == 0)
        return (0);

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        int num = va_arg(args, int);
        sum += num;
    }

    va_end(args);

    return (sum);
}

