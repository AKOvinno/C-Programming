#include<stdio.h>

int main(void)
{
    int i;

    for(i = 1; i <= 1000; i=i+i) {
        printf("%d ", i);
    }
    return 0;
}
