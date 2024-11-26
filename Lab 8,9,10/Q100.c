/*A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL
NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N
STUDENTS.*/
#include<stdio.h>
#include<ctype.h>
struct student 
{
    /* data */
    int roll_number;
    char Student_name[100];
    int Total_marks;
};

int main()
{
    FILE *fp;
    struct student s1;
    int n;
    fp = fopen("LNMIIT.txt","w");
    if(fp == NULL)
    {
       printf("Error:NOT created file");
    }
    printf("Enter Number Of Students: \n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter Students Details: \n");
        printf("Roll numbner: \n");
        scanf("%d",&s1.roll_number);
        printf("Name: \n");
        scanf("%s",s1.Student_name);
        printf("Total Marks: \n");
        scanf("%d",&s1.Total_marks);

        fprintf( fp,"Student Roll number:%d \n",s1.roll_number);
        fprintf( fp,"Student name: %s\n",s1.Student_name);
        fprintf( fp,"Students Total Marks: %d\n",s1.Total_marks);

    }
    fclose(fp);
    printf("Details Of %d students Have Save to LNMIIT \n",n);
}