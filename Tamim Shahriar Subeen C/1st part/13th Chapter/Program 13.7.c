#include<stdio.h>
#include<string.h>
void decrypt(char msg[])
{
    int i, n;
    n = strlen(msg);
    for(i = 0; i < n; i++) {
        if(msg[i] == 'A') {
            msg[i] = 'Z';
        }
        else if(msg[i] == 'z') {
            msg[i] = 'a';
        }
        else {
            msg[i] = msg[i] - 1;
        }
    }
}
void encrypt(char msg[])
{
    int i, n;
    n = strlen(msg);
    for(i = 0; i < n; i++) {
        if(msg[i] == 'z') {
            msg[i] = 'a';
        }
        else if(msg[i] == 'Z') {
            msg[i] = 'A';
        }
        else {
            msg[i] = msg[i] + 1;
        }
    }
}
int main()
{
    char s[80];
    scanf("%s", s);
    printf("Encrypted message: ");
    encrypt(s);
    printf("%s\n", s);
    printf("Decrypted message: ");
    decrypt(s);
    printf("%s\n", s);
    return 0;
}
