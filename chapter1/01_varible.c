#include <stdio.h> //  Includes the standard input/output library. is a preprocessor directive in C that tells the compiler to include the Standard Input Output header file before compiling the program.
int main() //The entry point of every C program.
{
    int a = 98;
    // printf("the output of this program is %d \n", a);
    // printf("Size of char: %lu bytes\n", sizeof(char));
    // printf("Size of int: %lu bytes\n", sizeof(int));
    // printf("Size of float: %lu bytes\n", sizeof(float));
    // printf("hello");

    // datatypes in c
     int age = 25;
    float pi = 3.14;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Pi: %f\n", pi);
    printf("Grade: %c\n", grade);


    return 0; //  Indicates that the program ended successfully.
}

// | Format | Data Type          | Used With         | Example Output            |
// | ------ | ------------------ | ----------------- | ------------------------- |
// | `%d`   | `int`              | `printf`, `scanf` | `Age: 25`                 |
// | `%f`   | `float` / `double` | `printf`, `scanf` | `Pi: 3.140000`            |
// | `%c`   | `char`             | `printf`, `scanf` | `Grade: A`                |
// | `%s`   | String (`char[]`)  | `printf`, `scanf` | `Name: Ayush`             |
// | `%lf`  | `double`           | `scanf` only      | For reading double values |
// | `%u`   | `unsigned int`     | `printf`          | Positive integer          |
// | `%ld`  | `long int`         | `printf`          | Long integer              |
// | `%p`   | Pointer            | `printf`          | Memory address (hex)      |
