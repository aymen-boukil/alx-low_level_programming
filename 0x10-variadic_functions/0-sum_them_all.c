#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_variadic - Calculate the sum of a variable number of arguments.
 * @n: The number of arguments.
 * @...: The variadic arguments.
 *
 * Return: The sum of the variadic arguments.
 */
int sum_them_all(int n, ...)
{
    va_list args;
    int sum = 0;
    int i;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        sum += va_arg(args, int);
    }

    va_end(args);

    return sum;
}

