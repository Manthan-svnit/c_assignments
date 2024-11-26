#include<stdio.h>
struct book 
{
    char name[25];
    char Author[25];
    int page;
    int chapters;
};
int main()
{
    struct book b1;
    printf("Enter name of book: \n");
    scanf("%s",&b1.name);
    printf("Enter Author of the book: \n");
    scanf("%s",&b1.Author);
    printf("Enter number of pages in book: \n");
    scanf("%d",&b1.page);
    printf("Enter Chapters in book: \n");
    scanf("%d",&b1.chapters);

    printf("Name of book:%s\n",b1.name);
    printf("Name of Author:%s\n",b1.Author);
    printf("Pages of book:%d\n",b1.page);
    printf("Chapters in book:%d\n",b1.chapters);
}