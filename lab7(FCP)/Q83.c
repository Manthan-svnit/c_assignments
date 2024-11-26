#include<stdio.h>
int max(int a[],int n);
int main()
{
    int n;
    printf("Enter Size Of an Array: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of an array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     int gretest= max(a,n);
     printf("Maximum number is %d",gretest);
}
int max(int a[],int n)
{
    int max = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}