#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 97 && c <= 122)
    {
        printf("Lower case");
    }
    else
    {
        printf("Not lower case");
    }
    return 0;
}