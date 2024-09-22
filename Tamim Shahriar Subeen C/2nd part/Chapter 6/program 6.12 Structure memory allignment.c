#include<stdio.h>
struct s1
{
    int n;
    double d;
    char c;
};
struct s2
{
    char c;
    int n;
    double d;
};
struct s3
{
    char c1;
    char c2;
    char c3;
    char c4;
    int n;
    double d;
};
struct s4
{
    char c1;
    int n;
    char c2;
    double d;
    char c3;
    char c4;
};
int main()
{
    printf("char size : %lu bytes\n", sizeof(char));
    printf("int size : %lu bytes\n", sizeof(int));
    printf("double size : %lu bytes\n", sizeof(double));

    printf("s1 size: %lu bytes\n", sizeof(struct s1)); /// 24 bytes
    printf("s2 size : %lu bytes\n", sizeof(struct s2)); /// 16 bytes
    printf("s3 size: %lu bytes\n", sizeof(struct s3)); /// 16 bytes
    printf("s4 size: %lu bytes\n", sizeof(struct s4)); /// 32 bytes

    return 0;
}
