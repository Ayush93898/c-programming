#include <stdio.h>

int main()
{
    int arr[30];

    for (int i = 0; i < 30; i++)
    {
        arr[i] = i;
    }

    // now we check the addresses of index of arrays are contigeous
    // for (int i = 0; i < 30; i++)
    // {
    //     printf("the address of %d index is %u \n", i, &arr[i]);
    // }

    // we can access array by the pointor
    // just want the memory add of first element then +i karke aage aage karke nikal lege
    int marks[] = {23, 56, 87, 54, 21};
    // int* ptr= &marks[0];
    // or we have also a shortcut to give the address of first element
    int *ptr = marks; // same as int* ptr= &marks[0];

    for (int i = 0; i < 5; i++)
    {
        printf(" the marks at index %d is %d\n",i,*ptr);
        ptr++;
    }
    
    return 0;
}