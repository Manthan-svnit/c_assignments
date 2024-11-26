#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of Rocks: \n");
    scanf("%d",&n);

    char rock[n][100];
    for(int i=0;i<n;i++)
    {
        printf("Enter elemets of rock: \n");
        scanf("%d",&rock[i]);
    }
    int gem=0;
    for(char i=97;i<123;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            
            count++;

        }
        if(count==n)
        {
            gem ++;
        }
    }
    printf("Number of elemets are %d",gem);
}