#include <stdio.h>
#include <stdlib.h>
#include<string.h>

 struct Student
    {
        char name[50];
        int age;
        char grade;
    }; // semicolor is important

// Entry point of the program
int main()
{
    // Your code starts here
    // structure - A structure in C is a way to group different types of data together under one name.
    //C struct = Java class with only public data and no methods,It's just a container to group different data types.
    // eg
   
    // assigining value
    struct Student s1;
    strcpy(s1.name, "Ayush"); // The name of 1 student, max 49 characters long (plus null terminator)
    s1.age = 23;
    s1.grade = 'A';

    
    // Print values
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Grade: %c\n", s1.grade);

    return 0;
}