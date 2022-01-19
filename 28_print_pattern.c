#include<stdio.h>
void printPattern(int n){
    for (int i = 1; i <= n; i+2)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printPattern(n);
    return 0;
}