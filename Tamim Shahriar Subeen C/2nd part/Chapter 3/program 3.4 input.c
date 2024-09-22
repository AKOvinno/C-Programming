#include<stdio.h>
int main()
{
    FILE *fp;
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    char filename[] = "in.txt";

    fp = fopen(filename, "w");
    fprintf(fp, "%d %d", num1, num2);
    fclose(fp);

    return 0;
}
