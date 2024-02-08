#include<stdio.h>
int main()
{
    int dividend, divisor, quotient, remainder;

    printf("Dividend = ");
    scanf("%d", &dividend);
    printf("divisor = ");
    scanf("%d", &divisor);

    quotient = (int) dividend / divisor;
    remainder = dividend - divisor * quotient;

    printf("Remainder = %d\n", remainder);

    return 0;
}
