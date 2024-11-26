#include<stdio.h>
int palindrome(int a);
int main()
{
    int n,z;
    printf("Enter a number: \n");
    scanf("%d",&n);
    z=palindrome(n);
    if(z=n)
    {
        printf("The Given number is Palindrome \n");
    }
    else
    {
        printf("The Given number is not Plindrome \n");
    }

}
int palindrome(int x)
{
    int rev,rem;
    while(x!=0)
    {
        rem = x%10;
        rev = rev*10 + rem;
        x = x/10;
        return rev;
    }
}