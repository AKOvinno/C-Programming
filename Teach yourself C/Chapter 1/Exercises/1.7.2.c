/* This program has two functions. */

#include<stdio.h>

void func1(void); /* prototypes */
void func2(void);

int main(void)
{
    func2();

    return 0;
}

void func2(void)
{
    func1();
    printf("the sunshine patriot.");
}
void func1(void)
{
    printf("The summer soldier, ");
}
