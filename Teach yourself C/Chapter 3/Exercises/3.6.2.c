#include<stdio.h>
#include<conio.h>

int main(void)
{
    int i;
    char ch;

    for(i = 0; i <10; i++) {
        printf("\nEnter a letter: ");
        ch = getche();
        printf("\n");
        for( ; ch; ch--) {
            printf("%c", '.');
        }
    }
    return 0;
}
