#include<stdio.h>
#include<math.h>
void decimal_to_binary(int num)
{
    int n = 0;
    while(pow(2, n) <= num) {
        n++;
    }
    char binary[n];
    for(int i = 0; i < n; i++) {
        binary[i] = 'X';
    }
    binary[n] = '\0';
    int i = 0;
    while(num != 0) {
        binary[i] = 48+(num%2);
        num = num / 2;
        i++;
    }
    printf("Binary: %s\n", binary);
}
int main()
{
    int num;
    scanf("%d", &num);
    decimal_to_binary(num);
    return 0;
}
