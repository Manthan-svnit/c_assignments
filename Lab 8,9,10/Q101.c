/*WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”.*/
#include<stdio.h>
#include<stdlib.h>

struct student 
{
    int roll_number;
    char student_name[100];
    int total_marks;
};

void append()
{
    struct student s1;
    FILE *fp;
    fp = fopen("LNMIIT.txt","a");
    if(fp == NULL)
    {
         printf("Error Occured");
         exit(1);
    }
    printf("Student Roll Number: \n");
    scanf("%d",&s1.roll_number);
    printf("Student Name: \n");
    scanf("%s", s1.student_name);
    printf("Total number: \n");
    scanf("%d",&s1.total_marks);

    fwrite(&s1,sizeof(struct student),1,fp);
    fclose(fp);
}

int main()
{
    int choice;
     do {
        printf("1. Append student information\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                append();
                break;
            case 2:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (1);

    return 0;

}
