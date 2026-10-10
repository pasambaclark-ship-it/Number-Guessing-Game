#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void instructions() {
    printf("Welcome to the Guess the Number Challenge!\n");
        printf("The instructions is to try to guess a number from 1-100\n");
}

void show_attempts(int attempts) {
    printf("Your attempts is %d \n", attempts);
}

void Game(){
    int guess;
    int attempts =0;

    int number= rand() % 100 + 1;

    do{
    printf("What is your guess? ");
    scanf("%d", &guess);
  
    if(guess == number) {
        printf("Congratulations! \n");
        show_attempts(attempts);
    } else if(guess < number) {
        printf("Too low, try again! \n");
    } else if (guess > number) {
        printf("Too high, try again!\n");
    } else {
        printf("Invalid input! \n");
    }
    attempts++;
} while(guess != number);
}

    int main() {

        instructions();
        srand((unsigned int) time(NULL));
        Game();
        return 0;
    }
