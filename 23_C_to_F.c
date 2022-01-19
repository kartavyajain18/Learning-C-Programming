#include <stdio.h>
float C_to_F(float C)
{
    return ((C * 9) / 5) + 32;
}
int main()
{
    float C;
    scanf("%f", &C);
    printf("%.2f C = %.2f F\n", C, C_to_F(C));
    return 0;
}