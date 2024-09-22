#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age, phoneNumber, num;

    file = fopen("student.txt", "a");

    if(file == NULL) {
        printf("File doesn't exist\n");
    }
    else {
        printf("File is opened\n");
        printf("Enter number of students: ");
        scanf("%d", &num);
        for(int i = 0; i < num; i++) {
            printf("Enter Student Name: ");
            scanf("%s", &name);
            printf("Enter Student Age: ");
            scanf("%d", &age);
            printf("Enter Student Phone Number: ");
            scanf("%d", &phoneNumber);
            fprintf(file, "%s\t\t%d\t%d\n", name, age, phoneNumber);
        }
        fclose(file);
    }
    return 0;
}
