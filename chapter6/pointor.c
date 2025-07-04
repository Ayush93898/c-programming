#include <stdio.h>

int main()
{
    int i = 56;
    // now if i want to find the address of i variable then i have to use the address operator &
    printf("Address of i is %p \n", &i); // Address of i is 0061FF1C, (hexa-decimal)
    printf("Address of i is %u \n", &i); // in integer ->  Address of i is 6422300

    // now i want to store the address of i varibale
    // here comes the concept of pointors

    int *j = &i;                     // j is the pointor, pointing to i
    printf("Address of i is %p\n", j); // Address of i is 0061FF18

    // now UNO-REVERSE ab agr adderess dia ho toh value kaise nikale
    // now we use 'value at address operator (*)'

    printf("Value of i is %d\n",*(&i)); //Value of i is 56
    printf("Value of i is %d",*j); //Value of i is 56

    return 0;
}