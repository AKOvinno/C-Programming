#include<stdio.h>
#include<stdbool.h>
bool digit_or_not(char ch)
{
    if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9') {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    char ch;
    ch = getchar();
    printf("%d\n", digit_or_not(ch));
    return 0;
}
