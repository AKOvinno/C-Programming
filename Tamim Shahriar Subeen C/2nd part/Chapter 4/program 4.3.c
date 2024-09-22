#include<stdio.h>
int a; /// Can be accessed across the big project all C files
static int b; /// Can be accessed only in this declared file functions
void func()
{
    a = a + 1;
    b = b + 1;
}
int main()
{
    func();
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
