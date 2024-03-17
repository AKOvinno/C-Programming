#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    scanf("%d", &num);
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
    int decimal = 0;
    int power = n;
    while(binary[n-1] == 'X') {
        decimal += pow(2, power-1);
        if(decimal <= num) {
            binary[i] = '1';
        }
        else {
            binary[i] = '0';
            decimal -= pow(2, power-1);
        }
        i++;
        power--;
    }
    printf("Binary: %s\n", binary);
    return 0;
}
