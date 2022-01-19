#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        *(ptr + i) = 7 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    for (int i = 10; i < 15; i++)
    {
        *(ptr + i) = 7 * (i + 1);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", *(ptr + i));
    }
    free(ptr);
    return 0;
}