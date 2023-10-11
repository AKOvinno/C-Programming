#include<stdio.h>
#include<conio.h>

int main(void)
{
    int i, radius, wide, length, height, ground;
    char ch;

    printf("Do you want to computer the area of Circle, Rectangle or Triangle?\n");
    printf("Enter First letter: \n");
    ch = getche();
    printf("\n");
    if(ch == 'C') {
        printf("Enter Radius: \n");
        scanf("%d", &radius);
        printf("The area of the Circle is: %f\n", 3.1416*radius*radius);
    }
    else if(ch == 'R') {
        printf("Enter wide and length: \n");
        scanf("%d %d", &wide, &length);
        printf("The area of the Rectangle is: %d\n", wide*length);
    }
    else if(ch == 'T') {
        printf("Enter ground and height: \n");
        scanf("%d %d", &ground, &height);
        printf("The area of the Triangle is: %f", 0.5*ground*height);
    }
    return 0;
}
