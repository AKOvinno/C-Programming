#include<stdio.h>
int main()
{
    int x = 10;
    int *p;

    printf("Value of x: %d\n", x); /// x = 10

    p = &x;
    *p = 20;

    printf("Value of x: %d\n", x); /// x = 20

    x = 15;

    printf("Value of x: %d\n", x); /// x = 15
    printf("Value stored at location %p is %d\n", p, *p); /// *p = 15

    printf("Address of x: %p\n", &x);
    printf("Value of p: %p\n", p);

    return 0;
}
