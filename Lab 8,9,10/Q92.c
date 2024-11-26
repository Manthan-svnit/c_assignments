/*92).WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.*/
#include<stdio.h>
void big(int *arr,int n);
int main()
{
    int n;
    printf("Enetr the size of an array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elemets of an array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    big(arr,n);

}
void big(int *arr,int n)
{
    int *max = arr;
    for(int i=1;i<n;i++)
    {
        if((*max) < *(arr + i))
        {
            max = arr + i;
        }
    }
    printf("Maximum Number is :%d",*max);
}