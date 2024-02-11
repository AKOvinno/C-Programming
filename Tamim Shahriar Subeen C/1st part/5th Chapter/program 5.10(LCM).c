#include<stdio.h>
int find_gcd(int a, int b)
{
    int gcd, t;
    if(a == 0) gcd = a;
    else if (b == 0) gcd = b;
    else {
        while(b != 0) {
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }
    return gcd;
}
int main()
{
    int a, b, lcm;
    scanf("%d %d", &a, &b);
    lcm = (a*b) / find_gcd(a, b);
    printf("LCM is %d\n", lcm);
    return 0;
}

