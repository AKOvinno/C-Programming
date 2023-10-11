#include<stdio.h>

int main(void)
{
    int room, wide, len, square_footage = 0, room_area, i;

    printf("Enter number of rooms: ");
    scanf("%d", &room);

    for(i = 0; i < room; i++) {
        printf("Enter the width and length of room no. %d ", i+1);
        scanf("%d %d", &wide, &len);
        room_area = wide*len;
        printf("The area of the room no. %d is %d\n", i+1, room_area);
        square_footage = square_footage + room_area;
    }
    printf("Square footage of the house is %d", square_footage);

    return 0;
}
