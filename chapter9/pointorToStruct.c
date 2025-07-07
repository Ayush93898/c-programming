#include <stdio.h>
#include <stdlib.h>
struct Student
{
    char name[50];
    int age;
};

// Entry point of the program
int main()
{
    // Your code starts here
    struct Student s1 = {"Ayush",24};
    struct Student* ptr = &s1;

    // access using pointor
    printf("Name: %s\n",(*ptr).name); // but this look complex
    printf("Name: %s\n",ptr->name);
    printf("Age: %d\n",ptr->age);

    // modify by pointor
    ptr->age = 21;
    printf("Age: %d\n",ptr->age);
    return 0;
}