#include<stdio.h>
#include<string.h>
int main()
{
    struct emp{
        char id[10];
        char name[20];
    } e1;
    struct emp *ptr;
    ptr = &e1;
    strcpy(ptr->id, "KHG5264");
    strcpy(ptr->name, "Kartavya");
    puts(ptr->id);
    puts(ptr->name);
    return 0;
}