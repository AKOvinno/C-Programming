#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt", "w");
    char name[20];
    if(file == NULL) {
        printf("File doesn't exist");
    }
    else {
        printf("File is opened\n");
        printf("Enter your name: ");
        gets(name);
        fputs(name, file);
        printf("File is written successfully!");
        fclose(file);
    }
    return 0;
}
