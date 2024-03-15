#include<stdio.h>
int string_length(char str[])
{
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}
int string_compare(char a[], char b[])
{
    int i, j;
    for(i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
        if(a[i] < b[i]) {
            return -1;
        }
        if(a[i] > b[i]) {
            return 1;
        }
    }
    if(string_length(a) == string_length(b)) {
        return 0;
    }
    if(string_length(a) < string_length(b)) {
        return -1;
    }
    if(string_length(a) > string_length(b)) {
        return 1;
    }
}
int main()
{
    char str1[100], str2[100];
    while(2 == scanf("%s %s", str1, str2)) {
        if(string_compare(str1, str2) == 0) {
            printf("Both string are same.\n");
        }
        else if(string_compare(str1, str2) == 1) {
            printf("%s is bigger than %s.\n", str1, str2);
        }
        else if(string_compare(str1, str2) == -1) {
            printf("%s is smaller than %s.\n", str1, str2);
        }
    }
    return 0;
}
