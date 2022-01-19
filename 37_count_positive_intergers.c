#include <stdio.h>
int count_positive_int(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {8, 9, -3, -5, 3, -6, -9, 8};
    int n = sizeof(arr) / sizeof(int);
    int count = count_positive_int(arr, n);
    printf("There are %d positive integers\n", count);
    return 0;
}