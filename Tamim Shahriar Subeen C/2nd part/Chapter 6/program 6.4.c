#include<stdio.h>
int main()
{
    struct student
    {
        int id;
        int name[40];
    };
    struct student one;

    scanf("%d", &one.id);
    scanf(" %[^\n]", one.name);

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}
