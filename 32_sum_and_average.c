#include <stdio.h>
int avg(int *a, int *b)
{
    return (*a + *b) / 2;
}
int sum(int *a, int *b)
{
    return *a + *b;
}
int main()
{
    int a = 11, b = 13;
    printf("Sum of a and b: %d\n", sum(&a, &b));
    printf("Average of a and b: %d\n", avg(&a, &b));
    return 0;
}