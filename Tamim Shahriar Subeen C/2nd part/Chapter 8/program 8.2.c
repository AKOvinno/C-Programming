#include<stdio.h>
#include<stdlib.h>
int main()
{
    for(int i = 0; i < 5; i++) {
        printf("%d\n", rand());
        /// It will print same numbers if we run the program again and again
        /// We can use srand() to print new numbers everytime.
    }
    return 0;
}
