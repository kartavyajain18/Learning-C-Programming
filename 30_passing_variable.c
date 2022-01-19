#include <stdio.h>
void call_by_value(int i)
{
    printf("Address of i, using call by value: %u\n", &i);
}
void call_by_reference(int *i)
{
    printf("Address of i, using call by reference: %u\n", i);
}
int main()
{
    int i;
    printf("Address of i: %u\n", &i);
    call_by_value(i);
    call_by_reference(&i);
    return 0;
}