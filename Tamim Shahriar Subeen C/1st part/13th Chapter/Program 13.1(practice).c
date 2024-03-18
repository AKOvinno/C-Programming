#include<stdio.h>
#include<string.h>

int main()
{
    char word[80];
    scanf("%s", word);
    int start = 0, end = strlen(word) - 1;
    while(start < end) {
        if(word[start] != word[end]) {
            printf("%s is not a palindrome.\n", word);
            return 0;
        }
        start++;
        end--;
    }
    printf("%s is a palindrome.\n", word);
    return 0;
}
