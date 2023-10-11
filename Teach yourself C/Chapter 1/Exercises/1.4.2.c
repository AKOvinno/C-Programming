#include<stdio.h>

int main(void)
{
    float num1, num2;

    printf("Enter a number: ");
    scanf("%f", &num1);

    printf("Enter another number: ");
    scanf("%f", &num2);

    printf("Sum is %f", num1+num2);

    return 0;
}
