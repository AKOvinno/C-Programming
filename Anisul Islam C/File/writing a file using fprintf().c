#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt", "w");

    char name[20];
    int age;

    if(file == NULL) {
        printf("File doesn't exist");
    }
    else {
        printf("File is opened\n");

        printf("Enter your name: ");
        gets(name);

        printf("\n");

        printf("Enter your age: ");
        scanf("%d", &age);

        fprintf(file, "Name: %s\tAge: %d\n", name, age);

        printf("File is written successfully!");
        fclose(file);
    }
    return 0;
}

