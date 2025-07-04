#include <stdio.h>

void multiplier(int* a);
void multiplier(int* a){
    *a = *a * 10;
}

int main(){
    int x = 45;
    multiplier(&x);
    printf("the new value of x is %d", x);
    return 0;
}