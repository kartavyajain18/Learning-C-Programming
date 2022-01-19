#include <stdio.h>
#include <string.h>
void strcpy_(char *p2, char *p1)
{
    int i;
    for (i = 0; i < strlen(p1); i++)
    {
        p2[i] = p1[i];
    }
    p2[i] = '\0';
}
int main()
{
    char s1[] = "Kartavya";
    char s2[20];
    strcpy_(s2, s1);
    puts(s1);
    puts(s2);
    return 0;
}