#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    time_t t;
    srand(1); /// Here 1 is seed
    /// We have to send new number in srand() everytime
    /// Then it will print new numbers everytime
    for(int i = 0; i < 5; i++) {
        printf("%d\n", rand());
    }
    return 0;
}
