#include <stdio.h>
int main()
{
    int m1, m2, m3;
    scanf("%d %d %d", &m1, &m2, &m3);
    if ((m1 + m2 + m3) / 3 > 40)
    {
        if (m1 > 33 && m2 > 33 && m3 > 33)
            printf("The student is pass");
        else
            printf("The student is fail");
    }
    else
        printf("The student is fail");
    return 0;
}