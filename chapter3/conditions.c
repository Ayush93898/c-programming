#include <stdio.h>

int main()
{
    // even or not
    // int a=9;
    // if(a%2==0){
    //     printf("a is even no");
    // } else{
    //     printf("odd");
    // }

    // int num = 0;
    // int num2 = 1;
    // if(!num) printf("this is going to be execute\n");
    // if(num2) printf("this is going to be execute\n");
    // if(23) printf("this is also goin to be executed\n");
    // int a = 22;
    // printf("the value a is %d\n",!a); // 0 , as 22 take it as true i.e 1 and !a = false i.e 0

    // //shorthand if else
    // a>2 ?printf("greater then 2\n") :  printf("smaller than 2");

    // switch case
    int a = 2;
    // printf("Enter a ");
    // scanf("%d",a);

    // switch(a){
    //     case 1:
    //         printf("Sunday");
    //         break;
    //     case 2:
    //         printf("Monday");
    //         break;
    //     case 3:
    //         printf("Tuesday");
    //         break;
    //     case 4:
    //         printf("Wednesday");
    //         break;
    //     case 5:
    //         printf("Friday");
    //         break;
    //     default:
    //         printf("Invalid day");
    // }


    // ascii values
    for(char i = 'a'; i<='z';i++){
         printf("The ASCII value of %c is %d\n", i, i); // 97-122 ascii value of lower case characters
    }
        return 0;
}