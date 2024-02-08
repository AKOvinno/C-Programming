#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        printf("%c is Vowel\n", ch);
    }
    else {
        printf("%c is Consonant\n", ch);
    }
    return 0;
}
