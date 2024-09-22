#include<stdio.h>
int main()
{
    /// Here, fp is a FILE type pointer. It's not a datatype. It's a file handle
    /// It gives the opportunity to do input-output or other tasks in a file
    /// Without this pointer file can't be accessed.
    FILE *fp;
    /// The name of the file that is going to be created
    char filename[] = "my_file.txt";

////    printf("Enter your file name: ");
////    gets(filename);

    /// opening a file using fopen function. It includes two parameter
    /// 1st parameter is filename, 2nd parameter is file mode
    /// fopen function returns a file pointer
    fp = fopen(filename, "w");

    /// 1st param contains file pointer
    /// 2nd param contains the string for the file
    fprintf(fp, "This is a file created by my program!");
    fprintf(fp, "I am so happy.");

    fclose(fp);
    return 0;
}
