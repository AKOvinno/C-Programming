#include<stdio.h>

int main(void)
{
    int i;

    printf("Enter proverb number: ");
    scanf("%d", &i);

    if(i == 1) printf("A bird in the hand...");
    if(i == 2) printf("A rolling stone...");
    if(i == 3) printf("Once burned, twice shy.");
    if(i == 4) printf("Early to bed, early to rise...");
    if(i == 5) printf("A penny saved is a penny earned.");

    return 0;
}
