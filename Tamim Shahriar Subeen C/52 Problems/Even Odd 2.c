#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char str[101];
        scanf("%s", str);
        int len = strlen(str);
        int last_digit = str[len-1] - '0';
        if(last_digit % 2 == 0) {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }
    return 0;
}
