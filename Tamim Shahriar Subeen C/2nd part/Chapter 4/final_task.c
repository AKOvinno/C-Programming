#include<stdio.h>

int add(int n)
{
    if(n == 1) {
        return 1;
    }
    return n + add(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Sum: %d\n", add(n));
    return 0;
}
