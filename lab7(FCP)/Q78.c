#include<stdio.h>
int Aramstrong(int a);
int main()
{
    int n,z;
    printf("Enter a number: \n");
    scanf("%d",&n);
    z = Aramstrong(n);
    if(z==n)
    {
        printf("The Given number is Aramstrong\n");
    }
    else
    {
        printf("The Given number is NOT Aramstrong\n");
    }

}
int Aramstrong(int x)
{
    int rev,rem;
    while(x!=0)
    {
        rem = x%10;
        rev = rev + (rem*rem*rem);
        x = x/10;
        return rev;
    }
}