#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
    char name[50];
    int age;
} Stud;

// Entry point of the program
int main()
{
    // Your code starts here
    // typedef lets you create a new name (alias) for an existing data type.
    typedef int sher;
    sher age = 32;


    // now by the use of typedef it is easir to assign the struct prop
    Stud Ayush = {"Ayush",23};
    printf(" name is %s and the age is %d",Ayush.name,Ayush.age);
    return 0;
}