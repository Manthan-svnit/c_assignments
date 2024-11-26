//WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.

#include<stdio.h>

 void cpy(int *one,int *two,int n)
    {
        for(int i=0;i<n;i++)
        {
            *(two + i) = *(one + i);
        }
    }
    int main()
{
    int n;
    printf("Enter size of an array: \n");
    scanf("%d",&n);
    int one[n],two[n];
    printf("Enter elemets of original array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&one[i]);
    }
     cpy(one,two,n);
    printf("Original Array: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d", *(one + i));
    }
    printf("\n");

    printf("Copied Array: \n");
     for(int i=0;i<n;i++)
    {
        printf("%d", *(two + i));
    }
    printf("\n");
   
}