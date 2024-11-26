/*89)WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF
SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.*/

#include<stdio.h>

void cpy(int *one,int *two,int n)
{
    int i;
   for (i = 0; i < n; i++) {
        *(two + (n - i - 1)) = *(one + i);
    }

}
int main()
{
    int n;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    int one[n],two[n];
    printf("Enter elemets of original array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&one[i]);
    }
    cpy(one, two, n);

    printf("Original Array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",*(one + i));
    }
    printf("\n");
    printf("Reversed Copied array is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",*(two + i));
    }
    printf("\n");
}