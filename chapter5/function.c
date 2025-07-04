#include <stdio.h>
#include<math.h>
// Function declaration (prototype)
void greeting();
int sum(int a, int b);
int change(int x);
int main()
{
    greeting();
    printf("\nThe sum is: %d\n", sum(2, 3));
    int b=21;
    change(b);
    printf("the change value of b is %d ",b); // 21 , as fun me b ki copy address gyi naki orignial add

    // finding the area of square by math fn
    int side = 4;
    printf(" the area of the square is %f \n ", pow(side,2));
    return 0;
}

// Function definition
void greeting()
{
    printf("radhe radhe");
}

int sum(int a, int b)
{
    return a + b;
}

int change(int x){
    x=34;
    return 0;
}