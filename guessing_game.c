// Number Guessing Game In C.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess, no_of_guess = 0;

    srand(time(NULL));

    printf("Welcome To The Number Guessing Game!\n");
    random = rand() % 100 + 1; // Generating Random Number Between Zero To Hundred...
    do
    {
        printf("Please Enter Your Guess Between(1-100): ");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random)
        {
            printf("Guess Larger Number\n");
        }
        else if (guess > random)
        {
            printf("Guess Smaller Number\n");
        }
        else
        {
            printf("Congrats!!!, You Have Successfully Guess The Number In %d Attempts.\n", no_of_guess);
        }

    } while (guess != random);

    printf("\nBye Bye, Thanks For Playing.");
    printf("\nDeveloped By: https://github.com/SibuSunilGithub\n");
}