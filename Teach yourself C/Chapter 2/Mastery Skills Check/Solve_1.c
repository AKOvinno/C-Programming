#include<stdio.h>

int main(void)
{
    int magic; /* Magic Number */
    int guess = 0; /* User's Guess */
    int i;

    magic = 786;

    for(i = 0; i < 10 && guess!=magic; i++){
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess == magic) {
            printf("Right!");
            printf(" %d is the magic number.\n", magic);
        }
        else {
            printf("...Sorry, you're wrong...");
            if(guess > magic) {
                printf(" Your guess is too high.\n");
            }
            else {
                printf(" Your guess is too low.\n");
            }
        }
    }
    return 0;
}
