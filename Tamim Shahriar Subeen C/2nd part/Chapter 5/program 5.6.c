#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num & 1) {
        printf("Odd\n");
    }
    else {
        printf("Even\n");
    }
    return 0;
}
