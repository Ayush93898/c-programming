#include <stdio.h>

int main(){
       // Declaring variables
    int age = 20;           // integer type
    float height = 5.9;     // decimal (float) type
    char grade = 'A';       // single character
    char name[] = "Ayush";  // string (array of characters)

    // Printing the values
    printf("My name is %s\n", name);       // %s for string
    printf("My age is %d\n", age);         // %d for int
    printf("My height is %.1f\n", height); // %f for float
    printf("My grade is %c\n", grade);     // %c for char

    // type-casting
    int n = 45;
    float b = 34.43;
    int c;
    b = (int)b;
    c = (int)b;
    printf("%d\n",(int)b); // 34 why int again, as wo abhi bhi float type h
    printf("%d\n",c); 
    return 0;
}