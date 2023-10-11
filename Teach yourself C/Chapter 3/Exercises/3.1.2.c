#include<stdio.h>

int main(void)
{
    char ch = 'A', ch2 = 'a';

    for(ch = 'A'; ch <= 'Z'; ch++) {
        printf("ASCII code for %c is %d\n", ch, ch);
    }

     for(ch2 = 'a'; ch2 <= 'z'; ch2++) {
        printf("ASCII code for %c is %d\n", ch2, ch2);
    }
    return 0;
}
