#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// create 2d vector using structure in c
struct vector
{
    int i;
    int j;
};
// sum of two vector
struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector v3;
    v3.i = v1.i + v2.i;
    v3.j = v1.j + v2.j;
    return v3;
}
//“This function is named sumVector, takes two struct vectors as input, and returns a new struct vector as output.”


//arrow operator
typedef struct Employee
{
    char name[20];
    int salary;
} Emp;

int main()
{
    struct vector v = {1, 2};
    struct vector v2 = {3, 4};
    struct vector v3 = sumVector(v, v2);

    printf("Vector 1: (%d, %d)\n", v.i, v.j);
    printf("Vector 2: (%d, %d)\n", v2.i, v2.j);
    printf("Sum Vector: (%d, %d)\n", v3.i, v3.j);

    //arrow operator
    Emp e1 = {"Ayush",89000};
    Emp* ptr1 = &e1;
    printf("Name of the Employee is %s \n",ptr1->name);
    printf("Salary of the Employee is %dk \n",ptr1->salary);
    
    return 0;
}