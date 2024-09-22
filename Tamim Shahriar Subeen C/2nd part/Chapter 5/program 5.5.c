/// XOR
/// In case of same bit output 0
/// In case of not same bit output 1
#include<stdio.h>
int main()
{
    int n1 = 5, n2 = 6, n3;

    n3 = n1 ^ n2;

    printf("%d ^ %d = %d\n", n1, n2, n3);

    return 0;
}
