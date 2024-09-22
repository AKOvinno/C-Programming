#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int num;
        scanf("%d", &num);
        for(int i = 1; i <= num; i++) {
            for(int j = 1; j <= num; j++) {
                printf("*");
            }
            printf("\n");
        }
        if(t != 0) {
            printf("\n");
        }
    }
    return 0;
}
