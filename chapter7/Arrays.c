#include <stdio.h>

int main()
{
    int marks[90]; // i.e   // Array of 90 integers
    for (int i = 0; i < 90; i++)
    {
        marks[i] = i;
    }
    for (int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++)
    {
        printf("marks are %d\n", marks[i]);
    }

    // others ways of initialization of array

    // 1. Basic Initialization (full list)
    int arr[5] = {1, 2, 3, 4, 5};

    // 2. Partial Initialization
    int arr[5] = {1, 2};

    // 3. All Zero Initialization
    int arr[5] = {0}; // All elements become 0

    // 4. Let the Compiler Count the Size
    int arr[] = {10, 20, 30}; // Compiler automatically sets the size to 3.

    // 5. Index-based Initialization (Sparse)
    int arr[10] = {[0] = 5, [4] = 100, [9] = 9}; // Others will be 0

    // 6. String Initialization (char arrays)
    char name[] = "Ayush";                      // Adds '\0' at end
    char name2[10] = {'A', 'y', 'u', 's', 'h'}; // No '\0'

    // 7. Multidimensional Array Initialization
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    // or
    int matrix[2][3] = {1, 2, 3, 4, 5, 6};

    return 0;
}

// sizeof(marks) returns the total size in bytes of the entire array.
//  sizeof(marks) → total bytes in the array (90 × 4 = 360 on most systems)
//  sizeof(marks[0]) → size of one int (usually 4 bytes)
//  Divide → 360 / 4 = 90 → number of elements in the array