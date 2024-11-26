#include<stdio.h>
void Odd();
void Even();
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if (n%2==0)
    {
       Even();
    }
    else
    {
        Odd();
    }
}
void Odd()
{
    printf("Given number is Odd\n");
}
void Even()
{
    printf("Given number is Even \n");
}