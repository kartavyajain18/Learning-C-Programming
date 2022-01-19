#include <stdio.h>
int main()
{
    float SI, P, R, T;
    printf("Enter P: ");
    scanf("%f", &P);
    printf("Enter R: ");
    scanf("%f", &R);
    printf("Enter T: ");
    scanf("%f", &T);
    SI = (P * R * T) / 100;
    printf("SI = %.2f\n", SI);
    return 0;
}