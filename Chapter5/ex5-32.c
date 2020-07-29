#include<stdio.h>                                                                                                                                                                                           
#include<stdlib.h>
#include<time.h>

void game(void);

int main(void)
{
        printf("============== Game ==============\n");
        printf("I have a number between 1 to 1000.\n");
        printf("Can you guess my number?\n");

        game();

        return 0;
}

void game()
{
        int guess;
        char select;
        srand(time(NULL));
        int target = rand() % 1000 + 1;

        while(1)
        {
                printf("Please type your guess : ");
                scanf("%d", &guess);

                if(guess < target)
                        printf("Too low. Try again.\n");
                else if(guess > target)
                        printf("Too high. Try again.\n");
                else
                {
                        printf("Excellent! You guessed the number!\n");
                        printf("Would you like to play again (y or n)? ");
                        scanf(" %c", &select);

                        if(select == 'n')
                                break;

                        target = rand() % 1000 + 1;
                        printf("I have a number between 1 to 1000.\n");
                        printf("Can you guess my number?\n");
                }
        }
}
