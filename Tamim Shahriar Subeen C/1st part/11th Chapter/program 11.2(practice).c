#include<stdio.h>
int main()
{
    int namta[10][10];
    int row, col, even = 0, odd = 0, sum = 0;

    for(row = 0; row < 10; row++) {
        for(col = 0; col < 10; col++) {
            namta[row][col] = (row+1) * (col+1);
        }
    }
    for(row = 0; row < 10; row++) {
        for(col = 0; col < 10; col++) {
            sum += namta[row][col];
            if(namta[row][col] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
    }
    printf("Sum = %d\nOdd = %d\nEven = %d\n", sum, odd, even);
    return 0;
}
