#include<stdio.h>
int main()
{
    int num, one = 0;
    scanf("%d", &num);
    while(num) {
        if(num%2) {
            one++;
        }
        num /= 2;
    }
    printf("%d\n", one);
    return 0;
}
