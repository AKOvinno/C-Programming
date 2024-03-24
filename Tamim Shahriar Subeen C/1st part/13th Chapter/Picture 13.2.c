#include<stdio.h>
int main()
{
    int n = 6;
    //scanf("%d", &n);
    for(int i = n; i > 0; i--) {
        for(int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for(int j = 0; j < 2 * i - 1; j++) {
            printf("C");
        }
        printf("\n");
    }
    for(int i = 2; i <= n; i++) {
        for(int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for(int j = 0; j < 2 * i - 1; j++) {
            printf("C");
        }
        printf("\n");
    }

    return 0;
}
