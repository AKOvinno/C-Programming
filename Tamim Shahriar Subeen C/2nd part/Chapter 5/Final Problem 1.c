#include<stdio.h>
int main()
{
    int ara[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11};
    int result1 = ara[0], result2 = 1;
    for(int i = 1; i < 10; i++) {
        result1 = result1 ^ ara[i];
    }
    for(int i = 2; i < 12; i++) {
        result2 = result2 ^ i;
    }
    printf("Missing Number: %d\n", result1^result2);
    return 0;
}
