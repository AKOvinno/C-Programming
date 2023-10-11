#include<stdio.h>

int main(void)
{
    int len, width, height;

    printf("Enter Length: ");
    scanf("%d", &len);
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter height: ");
    scanf("%d", &height);

    printf("The volume of the cube is: %d", len*width*height);

    return 0;
}
