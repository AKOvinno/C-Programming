#include<stdio.h>
int main()
{
    /// bitwise not operator ~
    char a, b;
    a = 0;
    b = ~a;
    printf("a = %d, b = %d\n", a, b); /// a = 0, b = -1
    a = 1;
    b = ~a;
    printf("a = %d, b = %d\n", a, b); /// a = 1, b = -2
    return 0;
}
