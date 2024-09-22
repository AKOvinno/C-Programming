#include<stdio.h>
#include<math.h>

#define MIN -1
/// Best way of defining PI value in C
/// Competitive programmers use this way
#define PI (2 * acos(0)) /// acos means cos inverse / cos^-1

int main()
{
    printf("Value of MIN : %d\n", MIN);
    printf("Value of PI : %lf\n", PI);

    return 0;
}
