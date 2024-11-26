//Write a program in C to print all Permutations of a Given string using pointers.
#include<stdio.h>
#include<string.h>
void swap(char *a,char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void  permute(char *ptr,int l,int r)
{
    if (l == r)
    {
        printf("%s \n",ptr);
    }
    for(int i = l;i<=r;i++)
    {
        swap(ptr+l,ptr+i);
        permute(ptr,l + 1,r);
        swap(ptr+l,ptr+i);
    }
}

int main()
{
    char str[100];
    printf("Enter a String: \n");
    scanf("%s",str);

    int n = strlen(str);
    permute(str,0,n - 1);
    return 0;
}