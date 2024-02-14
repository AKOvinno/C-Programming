#include<stdio.h>
double pi = 3.14;
void my_fnc()
{
    pi = 3.1416;
    return;
}
int main()
{
    printf("%lf\n", pi); // here pi will be 3.140000
    my_fnc();
    printf("%lf\n", pi); // here pi will be 3.141600 because we changed the value in my_fnc()
    return 0;
}
