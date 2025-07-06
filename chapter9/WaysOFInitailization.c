#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int age;
    char grade;
};
// Entry point of the program
int main()
{
    // Your code starts here
    //  1. Designated Initialization (Modern C)
    struct Student s1 = {
        .name = "Ayush",
        .age = 20,
        .grade = 'A'};

    // 2. Positional Initialization (Classic C style),❌ Risky if you forget the order or miss a value.
    struct Student s2 = {"Mishra", 21, 'B'};

    // 3. Assign values one by one
    struct Student s3;
    strcpy(s3.name, "Radhe"); // use strcpy for strings
    s3.age = 22;
    s3.grade = 'C';

    // 4. Copy another structure- Performs shallow copy (copies all fields)
    struct Student s4 = s3; // Copy s3 into s4

    // 5. Array of structures with initialization
    struct Student list[2] = {
        {"Shyam", 19, 'B'},
        {"Ravi", 20, 'A'}};

    return 0;
}