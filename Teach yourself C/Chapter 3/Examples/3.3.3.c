#include<stdio.h>
#include<conio.h>

int main(void)
{
    char ch;

     for(ch = getche(); ch != 'q'; ch = getche());

    printf("Found the q.");
    return 0;
}
