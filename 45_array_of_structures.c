#include <stdio.h>
#include <string.h>
struct complex
{
    int real;
    int comp;
} c[5];
void display(struct complex cn)
{
    printf("%d + %di\n", cn.real, cn.comp);
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %d", &c[i].real, &c[i].comp);
    }
    for (int i = 0; i < 5; i++)
    {
        display(c[i]);
    }
    return 0;
}