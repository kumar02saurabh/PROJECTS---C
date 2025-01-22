#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int guess , random;
    int no_of_guess = 0;
    srand(time(NULL)); // Seeding random Number function, it will generate random number


    printf("Welcome to the world of Gussing number\n");
    random = rand() % 100 + 1;  // Generating between 0 to 100.. rand () is function to call random  number 
   
    do {
        printf("\nPlease enter your Guess between (1 to 100):");
        scanf("%d",&guess);
        no_of_guess++;

        if (guess < random){
            printf("Guess a larger number\n");
        }else if(guess > random){
            printf("Guess a smaller number\n");
        }else {
            printf("\ncongratulations!! You have successfully guessed the number int %d attempts\n",no_of_guess);
        }
    }while (guess != random);
    printf("\nBye Bye Thanks for playing.\n");
    printf("\nDeveloped by Saurabh Kumar.\n");

    return 0;
}
