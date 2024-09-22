#include<stdio.h>
int main()
{
    int x = 100;
    int *p = NULL;
    printf("Value of x: %d\n", x);
    printf("Value of *p: %d\n", *p); /// p doesn't point to any memory location yet tried to dereferencing it
    return 0;
}
