#include<stdio.h>

int main(void)
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= (num/2)+1; i++){
        if(num % i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}
