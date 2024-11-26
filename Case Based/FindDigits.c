#include<stdio.h>
int main()
{
    int t;
    printf("Enter Number of test cases: \n");
    scanf("%d",&t);
    int n,z;
    for(int i=0;i<t;i++)
    {
        printf("Enter Number: \n");
        scanf("%d",&n);
        int temp = n;
        int count = 0;
        while(temp>0)
        {
            z = temp%10;
            if(z!=0 && n%z==0)
            {
                count ++;
            }
            temp = temp/10;
        }
        printf("Count =%d\n",count);
    }
}