#include <stdio.h>
#include <stdlib.h> 

int main(){

    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0){
        if (guessCount < guessLimit){
            printf("Enter a number between 0 and 10: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1){
        printf("Out of guesses. You lost\n");
    } else {
        printf("You win motherfucker!\n");
    }

    return 0;
}