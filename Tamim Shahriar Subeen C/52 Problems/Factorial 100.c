#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int num;
        scanf("%d", &num);
        int fact = 1;
        for(int i = 1; i <= num; i++) {
            fact *= i;
            printf("%d\n", fact);
        }
    }
    return 0;
}
