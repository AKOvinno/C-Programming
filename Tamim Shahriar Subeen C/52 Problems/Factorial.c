#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        long long int num, fac = 1;
        scanf("%lld", &num);
        for(long long int i = num; i > 0; i--) {
            fac *= i;
        }
        printf("%lld\n", fac);
    }
    return 0;
}
