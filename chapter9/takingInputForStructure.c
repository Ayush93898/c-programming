#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentData
{
    char name[50];
    int age;
    char grade;
};

// Entry point of the program
int main()
{
    // Your code starts here
    struct studentData Ayush;

    printf("Enter the name: ");
    scanf("%s", Ayush.name); // ✅ No & for arrays

    printf("Enter the age: ");
    scanf("%d", &Ayush.age); // ✅ Correct

    printf("Enter the grade: ");
    scanf(" %c", &Ayush.grade); // ✅ skips whitespace/newline // ✅ Space before %c skips newline

    printf("\n-- Output --\n");
    printf("Name: %s\n", Ayush.name);
    printf("Age: %d\n", Ayush.age);
    printf("Grade: %c\n", Ayush.grade);

    return 0;
}