#include<stdio.h>
typedef struct
{
    int day;
    int month;
    int year;
} datetype;
typedef struct
{
    char first[20];
    char last[20];
} nametype;
typedef struct
{
    int id;
    nametype name;
    nametype father_name;
    nametype mother_name;
    datetype date_of_birth;
} NID;
int main()
{
    NID one;
    printf("Enter ID: ");
    scanf("%d", &one.id);

    printf("Enter First Name: ");
    scanf("%s", one.name.first);
    printf("Enter Last Name: ");
    scanf("%s", one.name.last);

    printf("Enter Father's First Name: ");
    scanf("%s", one.father_name.first);
    printf("Enter Father's Last Name: ");
    scanf("%s", one.father_name.last);

    printf("Enter Mother's First Name: ");
    scanf("%s", one.mother_name.first);
    printf("Enter Mother's last Name: ");
    scanf("%s", one.mother_name.last);

    printf("Enter Date of Birth (dd/mm/yyyy): ");
    scanf("%d %d %d", &one.date_of_birth.day, &one.date_of_birth.month, &one.date_of_birth.year);

    printf("\nCitizen Information: \n");
    printf("ID:\t\t%d\n", one.id);
    printf("Name:\t\t%s %s\n", one.name.first, one.name.last);
    printf("Father's Name:\t%s %s\n", one.father_name.first, one.father_name.last);
    printf("Mother's Name:\t%s %s\n", one.mother_name.first, one.mother_name.last);
    printf("Date of Birth:\t%d - %d - %d\n", one.date_of_birth.day, one.date_of_birth.month, one.date_of_birth.year);

    return 0;
}

/*
344667
Ashfaq
Kadir
Sirajul
Haque
Kamrun
Naher
16 07 1998
*/
