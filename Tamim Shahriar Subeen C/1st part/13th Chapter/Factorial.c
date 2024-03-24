#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int i, root;
    if(n == 2) {
        return 1;
    }
    if(n % 2 == 0) {
        return 0;
    }
    root = sqrt(n);
    for(i = 3; i <= root; i = i + 2) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int ara[100], num;
    for(int i = 0; i < 100; i++) {
        ara[i] = 0;
    }
    int n;
    printf("Enter a number (2 to 99): ");
    scanf("%d", &n);
    for(int i = n; i > 1; i--) {
        num = i;
        if(is_prime(num) == 1) {
            ara[num]++;
        }
        else{
            while(num != 1) {
                for(int j = 2; j < n; j++) {
                    if(is_prime(j) == 1 && num % j == 0) {
                        ara[j]++;
                        num = num / j;
                    }
                }
            }
        }
    }
    printf("%d! = ", n);
    for(int i = 2; i <= n; i++) {
        if(ara[i] > 0) {
            printf("(%d, %d) ", i, ara[i]);
        }
    }
    return 0;
}
