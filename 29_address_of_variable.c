#include<stdio.h>
int main()
{
    int a = 5;
    int *b = &a;
    printf("Address of a: %u\n", &a);
    printf("Address of a: %u\n", b);
    printf("Value of a: %d\n", a);
    printf("Value of a: %d\n", *(&a));
    printf("Value of a: %d\n", *b);
    return 0;
}