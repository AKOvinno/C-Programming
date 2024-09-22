#include<stdio.h>
int main()
{
    FILE *fp_math, *fp_bangla, *fp_english, *fp_avg;

    char *math_input = "math.txt";
    char *bangla_input = "bangla.txt";
    char *english_input = "english.txt";
    char *average_input = "avg.txt";

    fp_math = fopen(math_input, "r");
    fp_bangla = fopen(bangla_input, "r");
    fp_english = fopen(english_input, "r");

    fp_avg = fopen(average_input, "w");

    for(int i = 1; i < 11; i++) {
        int roll, math, bangla, english, total = 0;
        double avg;

        fscanf(fp_math, "%d", &roll);
        fscanf(fp_math, "%d", &math);
        total += math;

        fscanf(fp_bangla, "%d", &roll);
        fscanf(fp_bangla, "%d", &bangla);
        total += bangla;

        fscanf(fp_english, "%d", &roll);
        fscanf(fp_english, "%d", &english);
        total += english;

        avg = (total * 1.0) / 3.0;

        printf("Roll: %d    Average Mark: %0.2lf\n", roll, avg);
        fprintf(fp_avg, "%d %0.2lf\n", roll, avg);
    }

    fclose(fp_math);
    fclose(fp_bangla);
    fclose(fp_english);
    fclose(fp_avg);

    return 0;
}
