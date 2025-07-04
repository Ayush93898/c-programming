#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // in this we make a project of number guessing

    // initialize random number generatot
    srand(time(0));

    // generate random no between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random number: %d\n", randomNumber);

    do
    {
        printf("guess the no: ");
        scanf("%d", &guessed);
        if(guessed>randomNumber){
            printf("lower number please! \n");
        } else{
            printf("higher no please! \n");
        }
        no_of_guesses++;
    } while (guessed != randomNumber);
    printf("You guess the random no:%d in %d guesses",randomNumber, no_of_guesses);
    return 0;
}