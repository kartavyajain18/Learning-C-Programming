#include <stdio.h>
int main()
{
    int a[] = {5, 6, 8, 20, 25, 1, 0, 9};
    int *p = a;
    if (*(p + 2) == a[2])
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}