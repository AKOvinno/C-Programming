#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *marks; /// integer pointer can also point integer array
    int i, n;
    printf("Please enter the number of students: ");
    scanf("%d", &n);

    /// now allocate memory, malloc returns a pointer of beginning of the memory
    marks = (int *) malloc(sizeof(int) * n);
    /// Here, (int *) is type casting, It wil type case the malloc's pointer into integer
    /// malloc returns void pointer so type case needed
    /// if malloc doesn't return void then we need to use separate functions for separate types of pointers

    /// This memory is from head segment
    printf("Enter the marks for each student: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    printf("Now here you can see the values: \n");
    // now print the marks array
    for(i = 0; i < n; i++) {
        printf("%d\n", marks[i]);
    }
    return 0;
}
