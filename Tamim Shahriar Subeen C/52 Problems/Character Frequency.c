#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char str[10001];
        getchar();
        gets(str);
        printf("%s\n", str);
//        char ch;
        getchar();
//        scanf("%c", &ch);
//        printf("%c\n", ch);
    }
    return 0;
}
