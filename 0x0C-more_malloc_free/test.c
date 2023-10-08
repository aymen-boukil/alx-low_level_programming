#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int size = 10;
    int *ptr;
    unsigned int i;

    ptr = malloc_checked(size * sizeof(int));

    if (ptr != NULL)
    {
        printf("Memory allocated successfully.\n");
        /* Example: Set some values in the allocated memory */
        for (i = 0; i < size; i++)
            ptr[i] = i;
        
        /* Example: Print the allocated memory content */
        printf("Allocated memory content: ");
        for (i = 0; i < size; i++)
            printf("%d ", ptr[i]);
        printf("\n");

        free(ptr);  /* Don't forget to free the allocated memory */
    }
    else
        printf("Memory allocation failed.\n");

    return 0;
}

