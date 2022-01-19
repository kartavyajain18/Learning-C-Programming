#include<stdio.h>
int main()
{
    int a[10], i, *p;
    p = a;
    for (i = 0; i < 10; i++)
    {
        *(p + i) = 5 * (i + 1);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}