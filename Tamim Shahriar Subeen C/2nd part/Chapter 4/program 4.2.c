#include<stdio.h>

int x = 1;

void myfnc(int y)
{
    y = y * 2;
    x = x + 10; /// Now x will be 20 globally
    printf("my fnc, x = %d, y = %d\n", x, y); /// x = 20, y = 10
}
int main()
{

    int y = 5;
    x = 10; /// Now x will be 10 globally
    myfnc(y);
    printf("main, x = %d, y = %d\n", x, y); /// x = 20, y = 5

    return 0;
}
