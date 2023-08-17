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
    va_list ap;

    va_start(ap, n);

    for (i = 0; i < n; i++)
    {
        int num = va_arg(ap, int);
        sum += num;
    }

    va_end(ap);

    return sum;
}

