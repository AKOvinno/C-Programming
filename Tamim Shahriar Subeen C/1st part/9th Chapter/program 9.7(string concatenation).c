#include<stdio.h>
int string_length(char str[])
{
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}
int main()
{
    char str1[] = "bangla", str2[] = "desh", str3[12];
    int i, j, length1 = string_length(str1), length2 = string_length(str2);
    for(i = 0, j = 0; i < length1; i++, j++) {
        str3[j] = str1[i];
    }
    for(i = 0; i < length2; i++, j++) {
        str3[j] = str2[i];
    }
    str3[j] = '\0';
    printf("%s\n", str3);
    return 0;
}
