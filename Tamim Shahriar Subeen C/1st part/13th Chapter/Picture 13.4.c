#include<stdio.h>
int main()
{
    int n = 12;
    for(int i = n; i > 0; i--) {
        for(int j = 0; j < n - i; j++) {
            printf("C");
        }
        for(int j = 1; j < 2 * i - 1; j++) {
            printf(" ");
        }
        for(int j = 0; j < n - i; j++) {
            printf("C");
        }
        printf("\n");
    }
    return 0;
}
