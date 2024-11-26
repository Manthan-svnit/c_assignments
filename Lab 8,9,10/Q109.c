#include<stdio.h>

int main()
{
    int a;
    int *ptr = &a;
    a = 20;
    printf("Value of a Before Change:%d\n",a);
    *ptr = 10;
    printf("Value Of a After Changing:%d",a);
    return 0;
}