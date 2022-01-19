#include <stdio.h>
int call_by_reference(int *a)
{
    *a = (*a) * 10;
    return *a;
}
int main()
{
    int a = 5;
    printf("Value of a, before calling funciton by reference: %d\n", a);
    call_by_reference(&a);
    printf("Value of a, after calling funciton by reference: %d\n", a);
    return 0;
}