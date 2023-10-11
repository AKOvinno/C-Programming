#include<stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(; num; num--);

    printf("\a");

    return 0;
}
