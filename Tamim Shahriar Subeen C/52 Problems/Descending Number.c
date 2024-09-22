#include<stdio.h>
int main()
{
    int l = 0, i = 1000;
    while(i != 0) {
        printf("%d ", i);
        i--;
        l++;
        if(l == 5) {
            l = 0;
            printf("\n");
        }
    }
    return 0;
}
