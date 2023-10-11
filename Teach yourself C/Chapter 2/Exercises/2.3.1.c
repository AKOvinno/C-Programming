#include<stdio.h>

int main(void)
{
    int num1, num2, choice;

    printf("1. Addition, 2. Subtraction. ");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);
        printf("Addition is: %d", num1+num2);
    }
    else{
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);
        printf("Subtraction is: %d", num1-num2);
    }
    return 0;
}
