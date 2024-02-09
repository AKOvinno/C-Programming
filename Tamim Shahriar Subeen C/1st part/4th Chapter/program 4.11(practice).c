#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(m = 10; m < 100; m++) {
        if(m % 11 == 0) {
            continue;
        }
        printf("%d\n", m);
    }
    return 0;
}
