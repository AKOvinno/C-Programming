#include<stdio.h>
int main()
{
    int ara[5][5];
    int row, col, sum = 0;
    for(row = 0; row < 5; row++) {
        for(col = 0; col < 5; col++) {
            scanf("%d", &ara[row][col]);
        }
    }
    for(row = 0; row < 5; row++) {
        for(col = 0; col < 5; col++) {
            sum += ara[row][col];
        }
        printf("Sum of row %d: %d\n", row+1, sum);
        sum = 0;
    }
    for(row = 0; row < 5; row++) {
        for(col = 0; col < 5; col++) {
            sum += ara[col][row];
        }
        printf("Sum of column %d: %d\n", col+1, sum);
        sum = 0;
    }
}

/*
User Input:
6 4 7 8 9
3 7 1 9 9
8 6 4 2 7
2 4 2 5 9
4 1 6 7 3
*/
