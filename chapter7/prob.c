#include <stdio.h>
void printArray(int a[], int size){
    for(int i=0; i<size;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

void reverse(int a[], int size){
    for(int i=0; i<size/2; i++){
        int temp = a[i];
        a[i] = a[size-i-1];
        a[size-i-1] = temp;
    }
}
int main(){
    // initilize a array and points to a ptr
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = arr;
    // printf("The value at address %u is %d\n",ptr+3,*(ptr+3));

    //swapping the array
    int arr2[] = {1,2,3,4,5};
    printArray(arr2,sizeof(arr2)/sizeof(arr2[0]));
    reverse(arr2,sizeof(arr2)/sizeof(arr2[0]));
    printArray(arr2,sizeof(arr2)/sizeof(arr2[0]));

    return 0;
}