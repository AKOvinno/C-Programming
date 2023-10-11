#include<stdio.h>

int main(void)
{
    int answer, count, right = 0, wrong = 0;

    for(count = 1; count < 11; count = count + 1){
        printf("What is %d + %d? ", count, count);
        scanf("%d", &answer);

        if(answer == count+count){
            printf("Right!");
            right++;
        }
        else{
            printf("Sorry, you're wrong. ");
            printf("The answer is %d. ", count+count);
            wrong++;
        }
    }
    printf("Right answers: %d", right);
    printf("Wrong answers: %d", wrong);
    return 0;
}
