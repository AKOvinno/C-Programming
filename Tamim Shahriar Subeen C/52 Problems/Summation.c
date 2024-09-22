#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char str[6];
        scanf("%s", str);
        int first = str[0] - '0';
        int last = str[4] - '0';
        printf("Sum = %d\n", first + last);
    }
    return 0;
}
