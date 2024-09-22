#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int count = 0;
        char num[10000001];
        while(scanf("%s", num) == 1) {
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
