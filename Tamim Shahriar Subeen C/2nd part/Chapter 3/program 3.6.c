#include<stdio.h>
#include<stdlib.h>

int main()
{
    /// Here declaring two file handler
    FILE *fp_in, *fp_out;
    /// Declaring pointer to point the file
    char *input_file = "photo1.jpg";
    char *output_file = "photo2.jpg";
    /// Temporary variable for mirroring the photo binary
    int ch;

    /// Opening the image file & commanding to read it
    fp_in = fopen(input_file, "rb");
    /// If file not found return failure
    if(fp_in == NULL) {
        /// The C library perror() function is designed to print
        /// a descriptive error message to the standard error
        /// stream (stderr), which helps in debugging and
        /// understanding what went wrong in your program.
        perror("File opening failed!");
        return EXIT_FAILURE;
    }
    /// Opening output file in write mode
    fp_out = fopen(output_file, "wb");

    /// copying all binary data from photo1 to photo2
    while(1) {
        /// reading each character using fgetc()
        ch = fgetc(fp_in);
        if(ch == EOF) {
            break;
        }
        /// Writing ch value using fputc() in the output file
        fputc(ch, fp_out);
    }
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
