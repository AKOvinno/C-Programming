#include<stdio.h>

int main(void)
{
    int i, tries = 0, guess_number;
    int magic_number = 786;

    for(i=1; i<=10; i++){
            printf("Enter a number: ");
            scanf("%d", &guess_number);
            tries++;
            if(guess_number == magic_number){
            printf("RIGHT!");
            break;
        }
        else if(guess_number> magic_number){
            printf("The guess is high.\n");
        }
        else{
            printf("The guess is low.\n");
        }
    }
    printf("You have tried %d times", tries);
}
