#include<stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf", &farenheit);

    celsius = (farenheit - 32) / 1.8;

    printf("Temperature in Fahrenheit is: %lf\n", celsius);

    return 0;
}
