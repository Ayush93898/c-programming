#include <stdio.h>
// function for fibonacci
int fibonacii(int n);

int fibonacii(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacii(n - 1) + fibonacii(n - 2);
}

// function to find sum of first n natural numbers
int sumOfFirstNaturalNumbers(int n);

int sumOfFirstNaturalNumbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumOfFirstNaturalNumbers(n - 1);
}
int main()
{
    int fibo = fibonacii(3);
    printf("first fibonacci no is %d \n", fibo);

    printf("sum of first five natural no is %d", sumOfFirstNaturalNumbers(5));
    return 0;
}