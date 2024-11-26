#include<stdio.h>
#include<math.h>

int isSquare(int x)
{
    int s = (int)sqrt((double)x);
    return (s*s == x);
}
int isFibo(int n)
{
    return isSquare(5* n * n+ 4) || isSquare(5 * n * n -4);
}
int main()
{
    int t;
    printf("Enter number of test cases: \n");
    scanf("%d",&t);
    while(t--)
    {
        int n;
        printf("Enter number: \n");
        scanf("%d",&n);
        if(isFibo(n)){
            printf("IsFibo\n");
        }
        else
        {
            printf("IsNotFibo\n");
        }
    }
    return 0;
}