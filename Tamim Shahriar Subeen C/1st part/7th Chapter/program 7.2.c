#include<stdio.h>

// First Mistake
//int add (int num1, int num2)
//{
//    double sum = num1 + num2;
//    return sum;
//}
// Second Mistake
//int add (double num1, double num2)
//{
//    double sum = num1 + num2;
//    return sum;
//}
double add (double num1, double num2)
{
    double sum = num1 + num2;
    return sum;
}
int main()
{
    double a, b, c;

    a = 2.8;
    b = 2.7;
    c = add(a, b);
    printf("%lf\n", c);

    return 0;
}
