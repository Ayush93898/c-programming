#include <stdio.h>

int main(){
    int a = 45;
    int *ptr = &a;
    printf(" the address of a is %u\n",ptr); // the address of a is 6422296
    ptr++; // if i do this then what will happen?
    printf(" the value of ptr is %u\n",ptr); // the value of ptr is 6422300
    // i.e as the byte taken by the integer in this architecture , then ptr is incerament by that no of bytes i.e 4 
    // but in case of char then it increamented by 1
    return 0;
}