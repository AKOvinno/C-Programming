#include<stdio.h>
int main()
{
    int i, n, sum = 0;
    scanf("%d", &n);
    // Using Loop
    for(i = 1; i <= n; i+=2) {
        sum = sum + i;
    }
    printf("Using Loop: %d\n", sum);
    // Using Formula
    int formula_sum = ((n + 1) / 2) * ((n + 1) / 2);
    printf("Using Formula: %d\n", formula_sum);
    return 0;
}
