#include<stdio.h>
int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--) {
        int a, b, c, max, min, middle;
        scanf("%d %d %d", &a, &b, &c);
        if(a > b && a > c) {
            max = a;
            min = c;
            middle = b;
        }
        else if(b > a && b > c) {
            max = b;
            min = a;
            middle = c;
        }
        else if(c > a && c > b) {
            max = c;
            min = b;
            middle = a;
        }
        if(min > middle) {
            int temp = min;
            min = middle;
            middle = temp;
        }
        printf("Case %d: %d %d %d\n", i++, min, middle, max);
    }
    return 0;
}
