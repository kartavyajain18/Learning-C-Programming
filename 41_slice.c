#include <stdio.h>
void slice(char *ptr, int m, int n)
{
    char s[20];
    int j = 0;
    for (int i = m; i <= n; i++, j++)
    {
        s[j] = ptr[i];
    }
    s[j] = '\0';
    printf("%s", s);
}
int main()
{
    char str[] = "String Slicing";
    int m = 2, n = 11;
    slice(str, m, n);
    return 0;
}