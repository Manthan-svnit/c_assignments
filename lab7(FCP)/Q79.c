#include<stdio.h>
void Exchange(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
     printf("NUmber After Swaping is %d,%d\n",*a,*b);
}
int main()
{
    int a,b;
    printf("Enter a and b two numbers: \n");
    scanf("%d%d",&a,&b);
    printf("Number before Swaping is %d,%d\n",a,b);
    Exchange(&a,&b);
    return 0;
}