/*WRITE A C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS.*/
#include<stdio.h>

#define max(a,b) (a>b?a:b)
int main()
{
    int a,b;
    printf("Enter Two Numbers: \n");
    scanf("%d %d",&a,&b);
    printf("Maximum Of Two Numbers Is:%d",max(a,b));
    return 0;
}