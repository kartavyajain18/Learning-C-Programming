#include <stdio.h>
int main()
{
    float income, tax;
    printf("Enter your income: ");
    scanf("%f", &income);
    if (income < 250000)
    {
        printf("No tax for income below 2.5L");
    }
    else if (income >= 250000 && income < 500000)
    {
        tax = (income * 5) / 100;
        printf("Tax = %f", tax);
    }
    else if (income >= 500000 && income < 1000000)
    {
        tax = (income * 20) / 100;
        printf("Tax = %f", tax);
    }
    else
    {
        tax = (income * 30) / 100;
        printf("Tax = %f", tax);
    }
    return 0;
}