#include<stdio.h>

int o_to_c(int ounces);

int main(void)
{
    int ounces, cups;

    printf("Enter ounces: ");
    scanf("%d", &ounces);

    cups = o_to_c(ounces);
    printf("Number of cups: %d", cups);

    return 0;
}

int o_to_c(int ounces)
{
    return ounces/8;
}
