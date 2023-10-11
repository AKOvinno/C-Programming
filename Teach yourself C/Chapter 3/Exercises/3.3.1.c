#include<stdio.h>
int main(void)
{
    int num;
    float distance, avg_speed;

    printf("Number of driving time you want to compute: \n");
    scanf("%d", &num);

    for(; num; num--) {
        printf("Enter Distance: ");
        scanf("%f", &distance);
        printf("Enter Average speed: ");
        scanf("%f", &avg_speed);
        printf("Driving Time: %f\n", distance/avg_speed);
    }
    return 0;
}
