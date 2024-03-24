#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if(ara[j] < ara[j-1]) {
                int temp = ara[j];
                ara[j] = ara[j-1];
                ara[j-1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        printf("%d\n", ara[i]);
    }
    return 0;
}
