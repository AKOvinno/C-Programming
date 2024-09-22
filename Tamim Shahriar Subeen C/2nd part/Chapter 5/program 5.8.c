#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x && !(x & (x-1))) {
        printf("%d is a power of 2\n", x);
    }
    else {
        printf("%d is not a power of 2\n", x);
    }
    return 0;
}
