#include <stdio.h>
#include <stdlib.h>

// Entry point of the program
int main()
{
    // Your code starts here
    int n = 30;
    // scanf("%d",&n);
    // int arr[n]; // but this is not allowed in c
    // then solution is dynamic memory allocation

    // malloc- Memory Allocation
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int)); // total 30 elem hai , and each elem take the sizeof(int) size, toh after mutliply these we get the size in which we store the elements
                                          // and malloc return null pointor, but we want integer pointor that why we multiplied by the int* for typeCasting

    // It allocates memory for 30 integers (each int is usually 4 bytes).
    // ptr will point to the first int, i.e., ptr[0].

    // Since memory is allocated contiguously (back-to-back) in RAM,You can access all 30 elements using:
    //  ptr[0], ptr[1], ..., ptr[29] //Because each ptr + i moves 4 bytes ahead (if int is 4 bytes).

    // input values
    ptr[0] = 3;
    ptr[1] = 4;

    printf("%d\n", ptr[0]); // 3

    // calloc , make array by calloc of size x
    int x = 20;
    int *ptr2;
    ptr2 = (int *)calloc(x, sizeof(int));

    // free fun
    free(ptr2) // deallocate memory of ptr 4*20 - 80 byte free kar dega

        // realloc fn
        // like maine pehle malloc ki help se 5 int store karne ke lia storage li, but abhi i need more so than i use realloc
        // Sometimes the dynamically allocated memory is insufficient or more than required. realloc is used to allocate memory of new size using the previous pointer and size.

    int k = 4;
    int* ptr3;
    ptr3 = (int*) malloc(4*sizeof(int));
    ptr3 = (int*) realloc(ptr3,10*sizeof(int));

    return 0;
}