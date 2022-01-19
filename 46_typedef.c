#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct complex{
        int real;
        int comp;
    } compNo;
    compNo c1;
    printf("Enter the real and imaginary part of a complex no.: ");
    scanf("%d %d", &c1.real, &c1.comp);
    printf("The complex no. is %d + %di", c1.real, c1.comp);
    return 0;
}