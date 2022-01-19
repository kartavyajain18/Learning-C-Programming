#include <stdio.h>
int strlen_(char *ptr)
{
    int count = 0, i = 0;
    while (ptr[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char str[] = "Kartavya";
    printf("Length of the string is %d", strlen_(str));
    return 0;
}