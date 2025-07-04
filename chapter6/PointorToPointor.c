#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // as j is pointor jo integer i ka add store kar raha h
    // now if i want to store the address of j
    int**k = &j;
    printf("The address of j is %p\n", &j); // The address of j is 0061FF14

    printf("value of i is %d \n", i); //value of i is 72 
    printf("value of i is %d \n", *j); //value of i is 72 

    // * se & kat jata h eg *(&i) = i

    return 0;
}