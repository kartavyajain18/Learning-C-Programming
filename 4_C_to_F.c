#include <stdio.h>
int main()
{
    int c;
    printf("Enter the temp in C: ");
    scanf("%d", &c);
    printf("%d C = %d F\n", c, ((9 * c) / 5) + 32);
    return 0;
}