#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int num, flag = 0;
        scanf("%d", &num);
        int i = 0;
        while(i*i <= num) {
            if(i*i == num) {
                flag = 1;
            }
            i++;
        }
        if(flag) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
