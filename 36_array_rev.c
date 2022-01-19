#include<stdio.h>
void arr_rev(int *arr, int size){
    int temp;
    for (int i = 0; i < size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
int main()
{
    int arr[] = {5, 8, 10, 15, 23, 65, 1, 0, 8, 6};
    int size = sizeof(arr)/sizeof(int);
    arr_rev(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}