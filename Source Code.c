// EECS 348 Assignment 1
/*This C program picks a number between 1 and 10, and then has
the user guess what the number is. The user gets 3 attempts,
and if they fail the secret number is revealed.*/
/* There are no inputs for the code other than the inputs
than the integer inputs asked for by the program.*/
/*The code will output the attempt number and a request for an integer.
It will tell the user if the attempt was to low or high, and at the
end of the game will state if the user won or lost*/
/*The source for the basics of the code were from ChatGPT.*/
/*Soren Edwin Thumann*/
/*File Creation: September 8th, 2026*/
/*Revision: September 8th, 2026*/


#include <stdio.h> //includes stdio library

int main() {    //start of main function
    int secretNumber = 7;   //declares an int variable called secretNumber and sets it to 7.
    int guess;  //declares an int variable called guess;
    int won = 0;    //declares an int variable called won and sets it to zero.
                    //won variable will act as flag for user victory.

    printf("Guess a number between 1 and 10.\n"); //prints game rules

    for (int attempt = 1; attempt <= 3; attempt++) {    //start of for-loop that will iterate 3 times for 3 guesses.
        printf("Attempt %d/3.\n", attempt); //prints guess number
        printf("Enter your guess: ");   //prints input statement to user.
        scanf("%d", &guess);    //stores user input into guess variable.

        if (guess == secretNumber) { //start of if statement, checks if user guessed correctly.
            printf("Correct! You win!\n");  //prints victory message.
            won = 1;    //flag variable turned on for victory.
            break;  // Stop immediately if correct
        } else if (guess < secretNumber) {  //else if, checks if the guess was too low.
            printf("Too low! Try again.\n"); //prints that the guess was too low.
        } else if (guess > secretNumber) {    //else if, checks if the guess was too high.
            printf("Too high! Try again.\n"); //prints that hthe guess was too high.
        } else { //else for unexpected inputs.
            printf("Please enter an integer next time!\n(That still counts as a guess!)\n"); //message warning user of bad input.
        }   //end of if-else
    }   //end of for loop

    if (!won) { //start of if checking victory flag variable.
        printf("Sorry, you lose! The secret number was %d.\n", secretNumber);   //prints loss statement if flag not triggered.
    }   //end of if

    return 0;   //return statement to end main.
}   //end of main.