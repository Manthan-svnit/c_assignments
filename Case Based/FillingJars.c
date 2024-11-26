#include<stdio.h>

int main()
{
    int N,M;
    printf("Enter number Of jars: \n");
    scanf("%d",&N);
    printf("Enter Number Of Operations Performed: \n");
    scanf("%d",&M);
    int a,b,k;
    int candy = 0;
    for(int i=0;i<M;i++)
    {
        printf("Enter value of a,b and k: \n");
        scanf("%d%d%d",&a,&b,&k);
        candy = candy + k*(b-a+1);
    }
    printf("average is :%d \n",candy/2);
    return 0;
}