#include<stdio.h>

int main(void)
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=num; i>=0; i--){
        printf("%d\n", i);
        printf("\a");
    }
    return 0;
}
