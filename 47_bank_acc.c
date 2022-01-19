#include <stdio.h>
typedef struct bankAcc
{
    char bankName[30];
    char name[30];
    long long int accNo;
    char IFSC[12];
} BA;
int main()
{
    BA c, *h;
    h = &c;
    printf("Enter Bank name: ");
    gets(h->bankName);
    printf("Enter account holder's name: ");
    gets(h->name);
    printf("Enter account holder's account number: ");
    scanf("%lld", &h->accNo);
    fflush(stdin);
    printf("Enter Bank's IFSC code: ");
    gets(h->IFSC);
    printf("Bank account details are:\nBank: %s\n", h->bankName);
    printf("Account Holder: %s\n", h->name);
    printf("Bank: %lld\n", h->accNo);
    printf("IFSC code: %s\n", h->IFSC);
    return 0;
}