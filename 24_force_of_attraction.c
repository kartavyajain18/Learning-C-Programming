#include <stdio.h>
#define g 9.8
float Force(float m)
{
    return g * m;
}
int main()
{
    float m;
    scanf("%f", &m);
    printf("Force of attraction = %.2f N\n", Force(m));
    return 0;
}