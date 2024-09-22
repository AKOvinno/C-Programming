#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int r1, r2, b;
        scanf("%d %d %d", &r1, &r2, &b);
        double crr, nrr;
        double run1 = r1 * 1.0, run2 = r2 * 1.0, ball = b * 1.0;
        crr = run2 / ((300.0 - b)/ 6.0);
        nrr = (run1-run2+1) / (ball / 6.0);
        printf("%0.2lf %0.2lf\n", crr, nrr);
    }
    return 0;
}
