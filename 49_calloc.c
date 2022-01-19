#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *(ptr + i));
    }
    free(ptr);
    return 0;
}