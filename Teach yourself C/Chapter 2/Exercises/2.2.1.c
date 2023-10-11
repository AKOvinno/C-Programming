#include<stdio.h>

int main(void)
{
    int num1, num2, choice;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("1: Sum. 2: Product. ");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Their sum is: %d", num1+num2);
    }
    else{
        printf("Their product is: %d", num1*num2);
    }
    return 0;
}
