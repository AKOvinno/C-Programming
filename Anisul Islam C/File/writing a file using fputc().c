#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;

    char *name = "Ashfaq Kadir Ovinno";
    int str_len = strlen(name);

    file = fopen("test.txt", "w");

    if(file == NULL) {
        printf("File doesn't exist.\n");
    }
    else {
        printf("File is opened.\n");

        for(int i = 0; i < str_len; i++) {
            fputc(name[i], file);
        }

        fclose(file);
    }

    return 0;
}

