#include<stdio.h>
int main()
{
    /// shift operator
    /// 1 place left shift means multiple by 2
    /// 1 place right shift means divide by 2
    int n, x, m;
    while(1) {
        printf("Please enter your number (0 to exit): ");
        scanf("%d", &n);
        if(n == 0) {
            break;
        }
        /// Left shift
        printf("How many bits you want to shift left? ");
        scanf("%d", &x);
        m = n << x;
        printf("Result is %d\n\n", m);
        /// Right shift
        printf("How many bits you want to shift Right? ");
        scanf("%d", &x);
        m = n >> x;
        printf("Result is %d\n\n", m);
    }
    return 0;
}
