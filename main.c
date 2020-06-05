#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Author-Jacob Grisham
//Created 6-5-20
//Purpose - Generates a random number and allows the user 5 guesses to get the number correct

int main()
{
    //declare ints
    int guesses = 5;
    int number;

    //generate random number
    time_t t;
    srand ((unsigned)time(&t));
    int randomNumber=rand()%21;

    //start loop for guesses
    start:
    guesses = --guesses;
    while(guesses != -1)


    {

        printf("Guess a number game!\nTry any number between 0-20:");
        scanf("%i", &number);

            //first of three ifs to determine the number guessed
            if (number < randomNumber)
            {
                printf("Sorry you guessed wrong, my number is greater than that\nYou have %i guesses left.\n",guesses);
                goto start;
            }
            else if (number < 0 || number > 20)
            {
                printf("The number must be in between 0 and 20 please.\n");
                goto start;
            }
            else if (number > randomNumber)
            {
                printf("Sorry you guessed wrong, my number is less than that\nYou have %i guesses left.\n",guesses);
                goto start;
            }
            else if (number == randomNumber)
            {
                printf("You are correct, the number was %i!!\n", number);
                break;
            }

    }

    return 0;
}
