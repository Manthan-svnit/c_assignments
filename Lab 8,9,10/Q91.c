/*91)WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
     int *ptr = &n;
    int square = (*ptr) * (*ptr);
    int cube = (*ptr) * (*ptr) * (*ptr);
    printf("Number is :%d\n",*ptr);
    printf("Square of given number is:%d\n",square);
    printf("Cube of the given number is %d\n",cube);
}