#include<stdio.h>
int main()
{
    int i;
    int total_marks[40];
    for(i = 0; i < 40; i++) {
        scanf("%d", &total_marks[i]);
    }
    int marks_count[101];

    for(i = 0; i < 101; i++) {
        marks_count[i] = 0;
    }
    for(i = 0; i < 40; i++) {
        marks_count[total_marks[i]]++;
    }
    for(i = 50; i <= 100; i++) {
        printf("Marks: %d\tCount: %d\n", i, marks_count[i]);
    }
    return 0;
}

