#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--) {
        for(int j = i; j >= 1; j--) {
            printf("C");
        }
        printf("\n");
    }
    for(int i = 2; i <= n; i++) {
        for(int j = i; j > 0; j--) {
            printf("C");
        }
        printf("\n");
    }
    return 0;
}
