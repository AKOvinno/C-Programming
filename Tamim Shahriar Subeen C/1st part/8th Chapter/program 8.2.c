#include<stdio.h>
int b_search(int ara[], int low, int high, int key)
{
    int low_indx = low, high_indx = high, num = key, mid_indx;
    while(low_indx <= high_indx) {
        mid_indx = (low_indx + high_indx) / 2;
        if(num == ara[mid_indx]) {
            break;
        }
        if(num < ara[mid_indx]) {
            high_indx = mid_indx - 1;
        }
        else {
            low_indx = mid_indx + 1;
        }
    }
    if(low_indx > high_indx) {
        return 1;
    }
    else {
        return mid_indx;
    }
}
int main()
{
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_indx = 0;
    int high_indx = 15;
    int mid_indx;
    int num = 97;
    int result = b_search(ara, low_indx, high_indx, num);
    if(result == 1) {
        printf("%d is not in the array\n", num);
    }
    else {
        printf("%d is found in the array. It the %d th element of the array.\n", num, result);
    }
    return 0;
}

