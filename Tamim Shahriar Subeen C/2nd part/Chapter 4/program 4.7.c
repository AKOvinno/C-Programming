#include<stdio.h>
void recurse(int count) /// compiler does not expect any return from void function
{
    if (count > 5) {
        return;
    }
    printf("Count = %d\n", count);
    recurse(count + 1);
}
int main()
{
    recurse(1);
    return 0;
}
