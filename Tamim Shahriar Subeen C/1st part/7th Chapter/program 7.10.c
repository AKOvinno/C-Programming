#include<stdio.h>
double area(double radius)
{
    return 3.1416 * radius * radius;
}
int main()
{
    double radius;
    scanf("%lf", &radius);
    printf("Area = %lf\n", area(radius));
    return 0;
}
