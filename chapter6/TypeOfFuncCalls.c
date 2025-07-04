#include <stdio.h>
int sum(int, int);
int sum(int a, int b)
{ // call by value (givin the copy of varible)
    return a + b;
}

// now make a sum fn jisme value of a and b ko change kar sake
int sum2(int *, int *);
int sum2(int *a, int *b)
{ // call by reference (yaha we give the actual add)
    *a = 1;
    *b = 3;
    return *a + *b;
}

// swap- also done by call by reference
void swap(int*, int*);

void swap(int*x, int*y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
int main()
{
    printf(" the sum of 4 and 5 is %d\n", sum(4, 5));
    int x = 3;
    int y = 8;
    printf(" the new sum is %d\n", sum2(&x, &y)); // 4, but 11 aana chaiye tha..lekin we change it by call by reference

    // swap

    int a=2;
    int b=3;
    swap(&a,&b);
    printf(" the value of a and b are %d and %d \n",a,b);
    return 0;
}