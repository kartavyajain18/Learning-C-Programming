#include <stdio.h>
int main()
{
    int sum = 0, i = 1;
    while (i <= 10)
    {
        sum = sum + 8 * i;
        i++;
    }
    printf("The sum of the numbers occuring in the multiplication table of 8 is %d\n", sum);
    return 0;
}