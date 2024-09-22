#include<stdio.h>
int main()
{
    FILE *file;
    char ch[50];
    file = fopen("test.txt", "r");

    if(file == NULL) {
        printf("File doesn't exist");
    }
    else {
        printf("File is opened\n");

        while(!feof(file)) {
            fgets(ch, 50, file);
            printf("%s\n", ch);
        }

        fclose(file);
    }
    return 0;
}


