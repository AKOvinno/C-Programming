#include<stdio.h>
int main()
{
    int n, x, y, initial_x, initial_y, c, i, j;
    printf("Enter grid size: ");
    scanf("%d", &n);
    int grid[n][n];

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            grid[i][j] = 1;
        }
    }
    printf("Please enter the initial position: ");
    scanf("%d %d", &initial_x, &initial_y);

    printf("Please enter the number of blocked cells: ");
    scanf("%d", &n);
    printf("Now enter the cells: ");

    for(i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        grid[x][y] = 0;
    }
    printf("Please enter direction(U, D, R, L) or S to stop: ");
    while(1) {
        scanf("%c", &c);
        if(c == 'S') {
            break;
        }
        else if(c == 'U') {
            initial_x--;
            if(grid[initial_x][initial_y] == 0) {
                initial_x++;
                printf("This cell is blocked.\n");
            }
        }
        else if(c == 'D') {
            initial_x++;
            if(grid[initial_x][initial_y] == 0) {
                initial_x--;
                printf("This cell is blocked.\n");
            }
        }
        else if(c == 'R') {
            initial_y++;
            if(grid[initial_x][initial_y] == 0) {
                initial_y--;
                printf("This cell is blocked.\n");
            }
        }
        else if(c == 'L') {
            initial_y--;
            if(grid[initial_x][initial_y] == 0) {
                initial_y++;
                printf("This cell is blocked.\n");
            }
        }
    }
    printf("Final position of the robot is: %d, %d\n", initial_x, initial_y);
}
