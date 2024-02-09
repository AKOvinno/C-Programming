#include<stdio.h>
int main()
{
    int n, m = 0, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n");
    for(i = 1; i <= n; i++) {
        printf("Multiplication table for %d:\n", i);
        for(j = 1; j <= 10; j++) {
            m = m + i;
            printf("%d X %d = %d\n", i, j, m);
        }
        m = 0;
        printf("\n");
    }
    return 0;
}
