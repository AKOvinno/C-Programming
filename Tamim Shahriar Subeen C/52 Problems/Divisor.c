#include<stdio.h>
int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--) {
        int num;
        scanf("%d", &num);
        printf("Case %d: ", i++);
        for(int i = 1; i <= num; i++) {
            if(num % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}
