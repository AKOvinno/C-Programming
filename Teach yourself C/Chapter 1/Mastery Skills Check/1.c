#include<stdio.h>

int main(void)
{
    double weight_earth, weight_moon;

    printf("Enter your weight on earth: ");
    scanf("%lf", &weight_earth);

    weight_moon = weight_earth*0.17;

    printf("Weight on moon: %lf", weight_moon);

    return 0;
}
