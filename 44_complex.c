#include<stdio.h>
#include<string.h>
int main()
{
    struct complex{
        int real;
        int complex;
    } c1;
    printf("Enter the real and imaginary part of a complex no.: ");
    scanf("%d %d", &c1.real, &c1.complex);
    printf("The complex no. is %d + %di", c1.real, c1.complex);
    return 0;
}