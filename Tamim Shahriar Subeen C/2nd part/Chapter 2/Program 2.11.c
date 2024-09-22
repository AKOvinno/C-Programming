#include<stdio.h>
int main()
{
    int *p = NULL;
    *p = 100;
    printf("Value of *p: %d\n", *p); /// p doesn't point to any memory location
    return 0;
}
