#include<stdio.h>

 int main(void)
{
    float gallons;

    printf("\nEnter gallons: ");
    scanf("%f", &gallons);

    do {
        printf("Liters: %f\n", gallons*3.7854);

        printf("Enter gallons or 0 to quit. ");
        scanf("%f", &gallons);
    }while(gallons != 0);
    return 0;
}
