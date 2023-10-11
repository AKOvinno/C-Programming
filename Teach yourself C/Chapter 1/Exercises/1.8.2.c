#include<stdio.h>

int convert(void);

int main(void)
{
    printf("%d", convert());

    return 0;
}
int convert(void)
{
    int dollars;
    printf("Enter number of dollars: ");
    scanf("%d", &dollars);
    return dollars/2;
}
