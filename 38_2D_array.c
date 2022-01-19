#include<stdio.h>
int main()
{
    int i, j, n = 2, a[3][10];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            a[i][j] = n * (j + 1);
        }
        if (n == 7)
        {
            n = 9;
        }
        else
        {
            n = 7;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}